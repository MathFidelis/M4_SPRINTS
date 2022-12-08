#include <LiquidCrystal_I2C.h>
#define sda 4
#define scl 5
#define ledg 2
#define ledr 1
String code;
// set the LCD number of columns and rows
int ColumnLCD = 16;
int StringLCD = 2;
// set LCD address, number of columns and rows
// if you don't know your display address, run an I2C scanner sketch
LiquidCrystal_I2C lcd(0x27, ColumnLCD, StringLCD);
// Function to scroll text
// The function acepts the following arguments:
// row: row number where the text will be displayed
// message: message to scroll
// delayTime: delay between each character shifting
// lcdColumns: number of columns of your LCD
void setup(){
  // initialize LCD
  Serial.begin(115200);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  Wire.begin(sda, scl);
  lcd.init();
  // turn on LCD backlight
  lcd.backlight();
  Serial.println("Type the password that you wanna save: ");
  while (Serial.available() == 0) {}
  code = Serial.readString();
  Serial.print("The code is: " + code);
  //lcd.print(codigo);
}
void loop(){
  Serial.println("Type the password:");
  while (Serial.available() == 0) {}
  String code_right = Serial.readString();  //read until timeout
  // password_right.trim();                        // remove any \r \n whitespace at the end of the String
  Serial.println("The password typed was: " + code_right);
  if (code_right == code) {
    Serial.println("Type the right password");
    lcd.setCursor(0, 0);
    lcd.print("Password OK !!!");
    delay(3000);
    digitalWrite(1, HIGH);
    delay(1000);
    digitalWrite(1, LOW);
    delay(3000);
    lcd.clear();
  }
  else {
    Serial.println("Wrong password");
    lcd.setCursor(0, 0);
    lcd.print(" Wrong ");
    digitalWrite(2, HIGH);
    delay(1000);
    digitalWrite(2, LOW);
    delay(3000);
    delay(3000);
    lcd.clear();
  }
}
