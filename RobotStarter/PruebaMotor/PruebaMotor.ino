#include <Makeblock.h>
#include <SoftwareSerial.h>
#include <Wire.h>

MeDCMotor dcMotor1(M1);
MeDCMotor dcMotor2(M2);

void setup()
{
}

void loop()
{
  dcMotor1.run(-100);
  dcMotor2.run(-100);
  delay(100);
  dcMotor1.run(100);
  dcMotor2.run(100);
}


