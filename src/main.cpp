#include <Arduino.h>
#include <SoftwareSerial.h>

// SoftwareSerial XBee(0,1);
int count = 0;

void setup()
{
  // Serial1 XBee
  Serial1.begin(115200);
  // Serial Virtual
  Serial.begin(115200);

  // XBee.setSerial();
  // Do we need to begin XBee?
  // XBee.begin(9600);


}

void loop()
{
//  if(Serial1.available() != 0) {
//    Serial.print("RECEIVING");
//  }
  // Send the message:
  Serial.print(String(count) + ": Sending Message through Serial1...\n");
  Serial1.write("At least 12");
  count++;
  delay(1000);

  // XBee.write('1');
}