void setup() {
pinMode(13, OUTPUT);
pinMode (2, INPUT);
}

void loop() {
//int botton=digitalRead(2);
if (botton==LOW) {   //Read the botton state
digitalWrite(13, HIGH);
int dial = analogRead(0);
tone(9,440);
delay(500);
delay(dial);
} else{  // Botton is not pressed
digitalWrite(13, LOW);
noTone(9);
delay(200);
delay(dial);
}
