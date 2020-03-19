void setup() {
  Serial.begin(9600);
  pinMode(7,INPUT);
  pinMode(6,OUTPUT);
  pinMode(8,OUTPUT);
  digitalWrite(6,HIGH);
  digitalWrite(8,HIGH);
  
}

void loop() {
  if(!digitalRead(7))
    digitalWrite(8,HIGH);
  else
    digitalWrite(8,LOW);
}
