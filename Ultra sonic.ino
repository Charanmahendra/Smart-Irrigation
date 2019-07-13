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
