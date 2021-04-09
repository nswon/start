#define LED1 12 //pin을 led로 설정
#define LED1 11
#define LED1 10

void setup(){
  pinMode(LED1, OUTPUT); //input, output 정하기
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop(){
  digitalWrite(LED1, HIGH); //0,1 껐다 켰다 정하기
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  delay(500);

  digitalWrite(LED1, LOW);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED1, LOW);
  delay(500);

  digitalWrite(LED1, LOW);
  digitalWrite(LED1, LOW);
  digitalWrite(LED1, HIGH);
  delay(500);
}
