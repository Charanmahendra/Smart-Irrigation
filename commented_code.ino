#include<dht.h>
 dht DHT;

#define DHT11_PIN D6
const int sensor_pin= A0;
const int trigPin = 9;
const int echoPin = 10;
const int pin=11;
const int pin=12;
long duration;
int distance;

void setup()
{
  pinMode(pin,OUTPUT);//Sets the pin as an Output
  pinMode(pin1,OUTPUT);//Sets the pin as an Output
 pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
 pinMode(echoPin, INPUT); // Sets the echoPin as an Input
 Serial.begin(9600); // Serial.begin(9600);
}
void loop()
{
 
 
  float moisture_per;//declares the variable with float type
  moisture_per=(100-(analogRead(sensor_pin)/1023.0)*100);//representing the value in percentage
  Serial.print("soil moisture in  percentage");
  Serial.print(moisture_per);//printing the value in serial monitor
  Serial.println("%");

   if(moisture_per<=40)    //declaring the condition to make motor ON or OFF
   { 
    digitalWrite(pin,HIGH);//to make the motor ON 
   }
   else
   {
    digitalWrite(pin,LOW);//to make the motor OFF
   }
 
 
  Serial.print("DHT11, \t");
  int chk = DHT.read11(DHT11_PIN);//to read the values from sensor
 
  Serial.print(DHT.humidity);//print the humidity values
  Serial.print(",\t");
  Serial.println(DHT.temperature);//print the temperature values
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

    if(distance>=50)//Declaring the condition to make motor ON or OFF
    {
      digitalWrite(pin1,HIGH);//To ON motor
    }
    else
    {
      digitalWrite(pin1,LOW);//To OFF motor
    }
}
