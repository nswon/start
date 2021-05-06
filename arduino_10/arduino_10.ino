byte Pin[] = {2,3,4,5,6,7,8,9};
byte pinnum = sizeof(Pin)/sizeof(byte);
void setup() {
  Serial.begin(9600);
  for(int i = 0;i<=pinnum;i++)
    pinMode(Pin[i],OUTPUT);
}

void loop() {
  if (Serial.available())
  {
    int Num;
    Num = (Serial.parseInt());
    for (int i = 0; i < 8; i++)
      digitalWrite(i+2, Num & (0x01 << i));

  }
}
