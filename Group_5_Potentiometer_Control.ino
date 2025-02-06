void setup() {
pinMode(13, OUTPUT);
pinMode (2, INPUT);
}

void loop() {
//int botton=digitalRead(2);
digitalWrite(13, HIGH);
int dial = analogRead(0);
tone(9,440);
delay(500);
delay(dial);
digitalWrite(13, LOW);
noTone(9);
delay(200);
delay(dial);
}
