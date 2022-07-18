#define delayTime 1

void setup() {
  pinMode(13,OUTPUT);
}

void loop() {
  // in order to go from 5V to 3.7V power is switched on 3/4 of the time.
  digitalWrite(13, HIGH);
  delay(delayTime*3);           
  digitalWrite(13, LOW); 
  delay(delayTime);           
}
