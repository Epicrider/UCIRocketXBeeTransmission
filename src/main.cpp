#include <Arduino.h>
#include <SoftwareSerial.h>

SoftwareSerial XBee(2,3);

void setup()
{
  Serial.begin(9600);
  XBee.begin(9600);
}

void loop()
{
  // Send the message:
  Serial.print("Send Char");
  XBee.write('1');
  delay(1000);
}