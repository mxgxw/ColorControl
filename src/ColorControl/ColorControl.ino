void setup() {
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop() {
  for(int i=0;i<255;i++) {
     analogWrite(3,i);
     delay(10);
  }
  analogWrite(3,0);
  for(int i=0;i<255;i++) {
     analogWrite(5,i);
     delay(10);
  }
  analogWrite(5,0);
  for(int i=0;i<255;i++) {
     analogWrite(6,i);
     delay(10);
  }
  analogWrite(6,0);
}
