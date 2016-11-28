#include <LiquidCrystal.h>
LiquidCrystal lcd (12, 11, 5, 4, 3, 2);
const int switchPin = 6;
int switchState = 0;
int prevSwitchState = 0;
int reply;

void setup() {
  // put your setup code here, to run once:
lcd.begin (16,2);
pinMode (switchPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
lcd.print ("Dimmi");
lcd.setCursor (0,1);
lcd.print ("stronzo!");

switchState = digitalRead (switchPin);
if (switchState != prevSwitchState) {
  if (switchState == LOW) {
    reply = random (8);
 lcd.clear();
 lcd.setCursor (0,0);
 lcd.print ("La sfera dice:");
 lcd.setCursor (0,1);
 switch (reply) {
  case 0:
  lcd.print ("Sì");
  break;
  case 1:
  lcd.print ("Probabile");
  break;
  case 2:
  lcd.print ("Certo");
  break;
  case 3:
  lcd.print ("Bene");
  break;
  case 4:
  lcd.print ("Forse");
  break;
  case 5:
  lcd.print ("Chiedi ancora!");
  break;
  case 6:
  lcd.print ("No");
  break;
  case 7:
  lcd.print ("Improbabile");
  break;
 }
 }
}
prevSwitchState = switchState;
}
