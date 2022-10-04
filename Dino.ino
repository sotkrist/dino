/*
Created by R2#8184(https://github.com/sotkrist)

This device blinks 2 leds inside a computer. It hasn't got any useful features, its just cool. (:
*/

#define led1 2
#define led2 3

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  digitalWrite(led1, HIGH);
  delay(400); 
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(400);
  digitalWrite(led2, LOW);
}