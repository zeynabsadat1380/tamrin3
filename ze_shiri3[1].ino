int ledpin[] = {2, 3, 4, 5, 6, 7, 8, 9};//ledpin connected to digital pin 2,3,4,5,6,7,8,9
void setup() {
  // put your setup code here, to run once:
  for (int i = 2; i < 10; i++) {
    pinMode(i, OUTPUT);//sets the digital pin as output
  }
}

void loop() {
   // put your main code here, to run repeatedly:
  for (int i = 0; i < 8; i++) {
    digitalWrite(ledpin[i], HIGH);//turns the ledpin[i] on
    delay(500);//waits for 0/5 second
    digitalWrite(ledpin[i], LOW);//turns the ledpin[i] off
  }
}
