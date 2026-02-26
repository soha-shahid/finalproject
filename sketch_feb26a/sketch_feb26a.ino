#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 7, 6, 5, 4, 3);

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600); // starts conversation (Most important for development and debugging)
lcd.begin(16,2); //tells lcd to use the entire screen
lcd.print("LCD Works!");
delay(2000);
lcd.clear();
Serial.begin(9600); //starts conversation (Most important for development and debugging)#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 7, 6, 5, 4, 3);
}

void loop() {
  // put your main code here, to run repeatedly:

}
