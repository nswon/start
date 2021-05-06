#define LED1 11
#define LED2 12
#define SW1 2
#define SW2 3
void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(SW1, INPUT_PULLUP);
  pinMode(SW2, INPUT_PULLUP);

}

void loop() {
  int sw_in;
  int swin;
  sw_in = digitalRead(SW1);
  swin = digitalRead(SW2);
  if (sw_in == LOW)
  {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    delay(3000);
  }
  else if(swin==LOW){
    digitalWrite(LED2, HIGH);
    digitalWrite(LED1, LOW); 
    delay(3000);
  }
 else
 digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW); 
}
