void setup() {
  Serial.begin(9600);

  
}

void loop() {
  // put your main code here, to run repeatedly:
  char ch;
  if(Serial.available())
  {
    Serial.write(Serial.read());
  }

}
