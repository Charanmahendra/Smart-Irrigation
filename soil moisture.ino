int sensorPin = A0;
int sensorValue;
int limit = 400;  
void setup() {
Serial.begin(9600);
pinMode(11, OUTPUT);
}

void loop() {  
sensorValue = analogRead(sensorPin);


Serial.println("Analog Value : ");
Serial.println(sensorValue);


if (sensorValue<limit) {
digitalWrite(11, LOW);
}
else {
digitalWrite(11, HIGH);
 }
delay(2000);
}
