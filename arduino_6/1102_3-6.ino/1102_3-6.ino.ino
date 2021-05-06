

void setup() {                                  
  // put your setup code here, to run once
  for (int i = 2; i <= 9; i++)     //초기값
    pinMode(i, OUTPUT);            //i를 output으로 지정
}

void loop() {
  // put your main code here, to run repeatedly:


  for (int i = 2; i <= 9; i++)           //2부터 9까지 증가
  {
    for (int j = 2; j <= 9; i++)       // 2부터 9까지 증가
    {
      if (i == j)                        // 만약 i=j라면 실행해라 j를 끄고 아니라면 켜라 //실행 완료되면 for증가로 돌아가기
        digitalWrite(j, LOW);
      else
        digitalWrite(j, HIGH);

    }
    delay(1000);
  }
  for (int i = 8; i >= 3; i--)    // 9로 하게되면 9번째께 한번더 깜박키고 
  {
    for (int j = 9; j >= 3; i--) // 8로 하게되면 9번째가 계속 켜진다
    {
      if (i == j)
        digitalWrite(j, LOW);
      else
        digitalWrite(j, HIGH);

    }
    delay(1000);
  }
}
