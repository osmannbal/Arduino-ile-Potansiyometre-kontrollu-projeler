int potPin=A0;
int potValue=0;
int ledPin=9;
int mapValue=0;

void setup() {
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
  Serial.println("Potansiyometre degeri ile led yakma");
}

void loop() {
  potValue=analogRead(potPin);
  mapValue=map(potValue,0,1023,0,255);
  analogWrite(9, mapValue);
  Serial.print("Pot degeri: ");
  Serial.println(potValue);
  Serial.print("Led degeri: ");
  Serial.println(mapValue);
  delay(1000);

}
