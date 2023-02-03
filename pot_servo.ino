#include <Servo.h>

Servo motor;

int potPin = A1;
int deger;

void setup()
{
  motor.attach(9);
  pinMode(A1, INPUT);
}

void loop()
{
  deger = analogRead(potPin);
  deger = map(deger, 0, 1023, 0, 180);
  motor.write(deger);
  delay(100);
}
