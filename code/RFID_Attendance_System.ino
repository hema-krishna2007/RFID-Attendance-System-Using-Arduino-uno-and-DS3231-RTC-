#include <SPI.h>
#include <MFRC522.h>
#include <Wire.h>
#include <RTClib.h>

// RFID pins
#define SS_PIN 10
#define RST_PIN 9

MFRC522 mfrc522(SS_PIN, RST_PIN);
RTC_DS3231 rtc;

// Replace these with your real scanned card UIDs
byte student1[4] = {0x46, 0xEA, 0x84, 0x22};
byte student2[4] = {0xCB, 0x2E, 0xA9, 0x3B};
byte student3[4] = {0xCB, 0x6A, 0x99, 0x3B};
byte student4[4] = {0x0B, 0x8D, 0x40, 0x3C};
byte student5[4] = {0xBB, 0xFA, 0x8C, 0x3B};

void setup() {
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();
  Wire.begin();

  // Initialize RTC
  if (!rtc.begin()) {
    Serial.println("RTC not found!");
    while (1); // Stop if RTC not detected
  }

  // Set RTC time once (first upload), then comment this line
  // rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));

  Serial.println("RFID Attendance System Ready");
  Serial.println("Scan Card...");
}

void loop() {
  // Look for new RFID card
  if (!mfrc522.PICC_IsNewCardPresent()) return;
  if (!mfrc522.PICC_ReadCardSerial()) return;

  DateTime now = rtc.now(); // Get current time

  Serial.println("Card Detected!");

  // Compare scanned UID with known students
  if (compareUID(mfrc522.uid.uidByte, student1)) {
    recordAttendance("Student 1", now);
  }
  else if (compareUID(mfrc522.uid.uidByte, student2)) {
    recordAttendance("Student 2", now);
  }
  else if (compareUID(mfrc522.uid.uidByte, student3)) {
    recordAttendance("Student 3", now);
  }
  else if (compareUID(mfrc522.uid.uidByte, student4)) {
    recordAttendance("Student 4", now);
  }
  else if (compareUID(mfrc522.uid.uidByte, student5)) {
    recordAttendance("Student 5", now);
  }
  else {
    Serial.println("Unknown Card");
  }

  delay(2000); // Wait 2 seconds before next scan
}

// Function to compare scanned UID with stored UID
bool compareUID(byte *a, byte *b) {
  for (byte i = 0; i < 4; i++) {
    if (a[i] != b[i]) return false;
  }
  return true;
}

// Function to print attendance details
void recordAttendance(String name, DateTime now) {
  Serial.println("Attendance Recorded");
  Serial.print("Name: ");
  Serial.println(name);

  Serial.print("Date: ");
  Serial.print(now.day());
  Serial.print("/");
  Serial.print(now.month());
  Serial.print("/");
  Serial.println(now.year());

  Serial.print("Time: ");
  Serial.print(now.hour());
  Serial.print(":");
  Serial.print(now.minute());
  Serial.print(":");
  Serial.println(now.second());

  Serial.println("-----------------------");
}
