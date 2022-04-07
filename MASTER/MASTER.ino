#include <Wire.h>

void setup() {
  Serial.begin(9600);
  Wire.begin();
  

}

void loop() {
// send data 
Wire.beginTransmission(0x11);
Wire.write(15);
Wire.write(10);
Serial.print("code ");
Serial.println(Wire.endTransmission());
delay(500);

//request data
Wire.requestFrom(0x11,2);

Serial.print(char(Wire.read()));
Serial.print("  ");
Serial.println(char(Wire.read()));
delay(500);


}
