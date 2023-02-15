/*
Author : Mohd Aman Ansari
embed
https://embed.org.in
*/

int hallSensorPin = 2;   //Pin 2 of controller(Arduino Nano 328p)
int ledPin = 13;         //Pin 13 of controller(Arduino Nano 328p)
int state = 0;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(hallSensorPin, INPUT);
}

void loop()
{

  state = digitalRead(hallSensorPin);

  if (state == LOW)
  {
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }
}
