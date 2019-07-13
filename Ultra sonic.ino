const int trigPin = 9;
const int echoPin = 10;
long duration;
int distance;
void setup()
{
 pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
 pinMode(echoPin, INPUT); // Sets the echoPin as an Input
 Serial.begin(9600); // Serial.begin(9600);
}
void loop()
{

 digitalWrite(trigPin, LOW);
    delay(200);
    digitalWrite(trigPin, HIGH);
    delay(200);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance= duration*0.034/2;
    Serial.print("Distance: ")
    Serial.println(distance);
}
