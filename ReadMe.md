
# Magnetism detection using Hall Effect sensor

In this project, when I place a magnet close to the sensor, an LED lights up in order to inform us that it detected a magnetic field. The sensor that we are using is called a Hall Effect sensor, a sensor that it can detect the presence of a magnetic field.  



## Components Used


1. Arduino Nano
2. LED
3. Hall Effect sensor
4. Wires & Magnets 
5. Power Supply 




## Schematic 

<img src="https://firebasestorage.googleapis.com/v0/b/magnetism-detection.appspot.com/o/schematic.PNG?alt=media&token=4aff2c26-95b5-49b9-8053-8721567ae824"></img>


## Code 

```javascript
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
