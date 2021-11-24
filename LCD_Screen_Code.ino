

#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setup(){
  
  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(8, INPUT);
  pinMode(9, OUTPUT);
  
}


void loop(){
  digitalWrite (8, HIGH);
  if (digitalRead(8) == 0){
    lcd.clear();
  	lcd.setCursor(3, 0);
  	lcd.print("You're lookin");
  	lcd.setCursor(2, 1);
  	lcd.print("CUTE AS HELL");
    digitalWrite (9, HIGH);
    delay(10000);
    lcd.clear();
  } else {
    digitalWrite (9, LOW);
    lcd.setCursor(0, 0);
  	lcd.print("You're not ");
  	lcd.setCursor(2, 1);
  	lcd.print("lookin CUTE");
  }
  
  
}
