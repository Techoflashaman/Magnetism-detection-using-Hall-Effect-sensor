# Magnetism detection using Hall Effect sensor

In this project, we are utilizing a Hall Effect sensor to accurately detect the presence of a magnetic field. Once a magnet is brought into close proximity with the sensor, it triggers the activation of an LED, thereby signaling the presence of a magnetic field.

The Hall Effect sensor is a sophisticated electronic component designed to measure the magnitude and direction of magnetic fields with high accuracy and sensitivity. When a magnetic field is applied to the sensor, it creates a measurable electric current, which can be utilized to determine the presence, strength, and polarity of the field. The Hall Effect sensor's exceptional performance in detecting magnetic fields makes it an ideal choice for various applications requiring precise and reliable magnetic field detection.

The use of the Hall Effect sensor in our project offers numerous benefits, such as high accuracy and sensitivity in detecting the presence of magnetic fields. Our system can have a wide range of applications, such as detecting the opening or closing of doors, detecting the presence of magnets in electronic devices, or even in scientific research to measure magnetic fields. Overall, the Hall Effect sensor's exceptional performance and versatility make it a valuable tool for various projects requiring magnetic field detection.  



## Components Used

### Hardware

1. Arduino Nano
2. LED
3. Hall Effect sensor
4. Wires & Magnets 
5. Power Supply 

### Software

1. VS Code (Arduino IDE Extention)




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
