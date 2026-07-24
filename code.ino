
#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,11,12,13);
//LiquidCrystal lcd (Rs,rw,D4,D5,D6,D7);
void setup()
{
 lcd.begin(16,2);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop()
{
  int a=analogRead(2)/4;
  analogWrite(5,a);
  analogWrite(6,a);

  lcd.print(a);
  delay(1000);
  lcd.clear();
  
  if(a<=125)
  {
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
  }
  else
    {
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    }
}
