

const int sensorPin = A0; 
int ledPin = 13;

int sensorValue = 0;
int outputValue = 0;
int percentValue = 0;
                                                                                        
bool state = 0;

void setup() {
  Serial.begin(9600);
  
  pinMode(sensorPin, OUTPUT);
  pinMode(ledPin,OUTPUT);


}

void loop() {

  sensorValue = analogRead(sensorPin);
  Serial.print("\n\nAnalog Value: ");
  Serial.print(sensorValue);

  percentValue = map(sensorValue, 1023, 300, 0, 100);
  Serial.print("\nPercentValue: ");
  Serial.print(percentValue);
  Serial.print("%");


  if (state == 0)
  {
    if (percentValue < 40)
    {
      motorStart ();
      state = 1;
    }
    else
    {
      motorStop();
      state = 0;
    }
  }

  else if (state == 1)
  {
    if (percentValue < 80)
    {
      motorStart ();
      state = 1;
    }
    else if (percentValue > 80)
    {
      motorStop();
      state = 0;
    }
  }
  delay(3000);

}



void motorStop()

{
  //analogWrite(ledPin, 0); // Stop motor
  //analogWrite(MotorInPin2, 0);
  digitalWrite(ledPin, LOW); // Stop motor
 
}
void motorStart ()
{
 // analogWrite(ledPin, 1); // almost 50% motor Speed
  //analogWrite(MotorInPin2, 0);
  digitalWrite(ledPin, HIGH);
  
}
