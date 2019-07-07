#include<dht.h>
 dht DHT;

#define DHT11_PIN D0
const int sensor_pin= A0;
const int trigPin = 9;
const int echoPin = 10;
const int pin=13;
long duration;
int distance;

void setup()
{
  pinMode(pin,OUTPUT);
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
    digitalWrite(pin,HIGH);
   }
   else
   {
    digitalWrite(pin,LOW);
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
}