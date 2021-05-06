#define LED1 12
void setup() {
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  
}

void loop() {

  if(Serial.available())
  {
   int a=Serial.parseInt();
   Serial.print(a);
   if(a==1)
   digitalWrite(LED1, HIGH);
   if(a==0)
   digitalWrite(LED1, LOW);
  }
}
