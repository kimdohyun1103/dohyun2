#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display
int cds=A0; //조도센서를 A2(아나로그 핀에 꽂겠다는 뜻 
int cdsValue =0;
int led1=12;
 void setup()
      {
        lcd.init();                      // initialize the lcd 
        lcd.init();
        // Print a message to the LCD.
        lcd.backlight();
        lcd.setCursor(3,0);
        lcd.print("KimDoHyeon");
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
         lcd.setCursor(0,1);
         lcd.print("cds_value=");
         lcd.setCursor(12,1);
         lcd.print(cdsValue);
 
 
  delay(300);      
        }
