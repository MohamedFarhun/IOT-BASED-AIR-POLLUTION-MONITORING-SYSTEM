#include <SoftwareSerial.h>
SoftwareSerial mySerial(5, 6);
int aqValue;
void setup()
{
mySerial.begin(115200);
Serial.begin(115200);
}
void loop()
{
aqValue = analogRead(A0);
Serial.println(aqValue);
mySerial.println(aqValue);
delay(300000);
}
