/************************************************************

░█████╗░██╗░░██╗██╗░░░██╗███████╗      ███████╗██████╗░██╗░░░██╗
██╔══██╗╚██╗██╔╝╚██╗░██╔╝╚════██║      ██╔════╝██╔══██╗██║░░░██║
███████║░╚███╔╝░░╚████╔╝░░░███╔═╝      █████╗░░██║░░██║██║░░░██║
██╔══██║░██╔██╗░░░╚██╔╝░░██╔══╝░░      ██╔══╝░░██║░░██║██║░░░██║
██║░░██║██╔╝╚██╗░░░██║░░░███████╗      ███████╗██████╔╝╚██████╔╝
╚═╝░░╚═╝╚═╝░░╚═╝░░░╚═╝░░░╚══════╝      ╚══════╝╚═════╝░░╚═════╝░

Instagram: https://www.instagram.com/sahadnisham.k/
LinkedIn : https://www.linkedin.com/in/sahad-nisham-k/

*************************************************************
=============== TEST THE MODULE - GPS NEO-6M ===============
  Module : GPS NEO-6M Test Code
  Board  : Arduino UNO
 ************************************************************/


#include <TinyGPS++.h>
#include <SoftwareSerial.h>

// Create TinyGPS++ object
TinyGPSPlus gps;

// RX, TX
SoftwareSerial gpsSerial(4, 3);

void setup() {
  Serial.begin(9600);
  gpsSerial.begin(9600);

  Serial.println("===== TEST THE MODULE =====");
  Serial.println("Testing GPS NEO-6M...");
  Serial.println("Waiting for GPS signal...\n");
}

void loop() {

  while (gpsSerial.available() > 0) {
    gps.encode(gpsSerial.read());
  }

  if (gps.location.isUpdated()) {

    Serial.println("GPS Signal Detected!");

    Serial.print("Latitude: ");
    Serial.println(gps.location.lat(), 6);

    Serial.print("Longitude: ");
    Serial.println(gps.location.lng(), 6);

    Serial.print("Satellites: ");
    Serial.println(gps.satellites.value());

    Serial.print("Altitude (m): ");
    Serial.println(gps.altitude.meters());

    Serial.print("Speed (km/h): ");
    Serial.println(gps.speed.kmph());

    Serial.println("----------------------------");
  }

  if (millis() > 5000 && gps.charsProcessed() < 10) {
    Serial.println("No GPS detected: check wiring.");
    while (true);
  }
}
