int cds=A0; //조도센서를 A2(아나로그 핀에 꽂겠다는 뜻 
int cdsValue =0;
int led1=12;
 void setup()
      {
       pinMode(led1, OUTPUT);
       Serial.begin(9600); //9600BAU로 아두이노와 컴퓨터가 통신
      }
void loop()
        {
         cdsValue = analogRead(cds);
          // cds A2에 꽂힌 핀에서 조도값을 읽어올래
         Serial.print("cds value = ");
         // 시리얼 포트창(오른쪽 상단 돋보기 모양)에서 값 확인
         Serial.println(  cdsValue);
     
 if((cdsValue)<500)
//조도센서값이 500보다 작으면 불을 켜도록 코딩
{ digitalWrite(led1,HIGH); }
else 
{ digitalWrite(led1,LOW); }
        
        }
