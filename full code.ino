#include "dht.h"
 dht DHT
 
#define DHT11_PIN 1
const int soil_sensor = A0;
const int trigPin = 9;
const int echoPin = 10;
const int pin1=12;
const int pin2=13;
int sensorValue = 0;
int outputValue = 0;
int percentValue = 0;
long duration;
int distance;

void setup()
{
 pinMode(pin1,OUTPUT);
 pinMode(pin2,OUTPUT);
 pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
 pinMode(echoPin, INPUT); // Sets the echoPin as an Input
 Serial.begin(9600); // Serial.begin(9600);
}

void loop()
{
  float moisture_per;
  moisture_per=(100-(analogRead(sensor_pin)/1023.0)*100);
  Serial.print("soil moisture in  percentage");
  Serial.print(moisture_per);
  Serial.println("%");

   if(moisture_per<40)
   { 
    digitalWrite(pin1,HIGH);
   }
   else
   {
    digitalWrite(pin1,LOW);
   }

Serial.print("DHT11, \t");
  int chk = DHT.read11(DHT11_PIN);
  Serial.print(DHT.humidity);
  Serial.print(",\t");
  Serial.println(DHT.temperature);
  delay(1000);

// Clears the trigPin
    digitalWrite(trigPin, LOW);
    delay(200);
    // Sets the trigPin on HIGH state for 10 micro seconds
    digitalWrite(trigPin, HIGH);
    delay(200);
    digitalWrite(trigPin, LOW);
    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echoPin, HIGH);
    // Calculating the distance
    distance= duration*0.034/2;
    // Prints the distance on the Serial Monitor
    Serial.print("Distance: ");
    Serial.println(distance);

    if(distance>=50)
    {
      digitalWrite(pin2,HIGH);
    }
    else
    {
      digitalWrite(pin2,LOW);
    }
}

