#define LED 12
void setup() {
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);

}

void loop() {
 
  if(Serial.available())
  {
    int a=Serial.parseInt();
    int i=0;
    if(a==1)
    {
      i=i^1;
      digitalWrite(LED, i);
    }
  }
  

}
