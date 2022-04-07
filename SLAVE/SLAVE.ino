#include <Wire.h>


void rec() { 
  Serial.println(Wire.read());
   Serial.println(Wire.read());

}
void req() { 
  Wire.write('s');
  Wire.write('g');
  
}
void setup() {
  Serial.begin(9600);
  Wire.begin(0x11);
  Wire.onReceive(rec);
  Wire.onRequest(req);
}

void loop() {

}
