Internet of Things (IOT Project)
=>Smart IoT RFID Attendance System using NodeMCU ESP8266 and Google Sheets

This project demonstrates how to build a smart and efficient attendance system using RFID technology integrated with the NodeMCU ESP8266 Wi-Fi Module and Google Sheets as a cloud-based database.

🔍 How It Works:

An RFID card is scanned on the MFRC522 module connected to NodeMCU ESP8266.

NodeMCU sends the card UID, along with the timestamp, to a Google Apps Script Web App (HTTP GET Request).

The data is automatically logged into Google Sheets.

Simultaneously, the same data is printed on the Arduino Serial Monitor for live confirmation.

A buzzer provides feedback on successful scans.


=> Temperature & Humidity Monitor

 What it does: Sends real-time temperature and humidity data to your phone as well as in blynk website also temperature moves to above 30 the alert notification received in email.

 Components: DHT11 or DHT22 sensor, ESP8266, Blynk app.
