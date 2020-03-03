#include <LiquidCrystal.h>
int incP1 = 7;
int incP2 = 6;
int button1 = 0;
int button2 = 0;
//pin 6 & 7

int P1Score = 0;
int P2Score = 0;
int totalScore = 0;
int swapCounter = 0;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("P1     ||     P2");
lcd.setCursor(0,1);
  lcd.print("0      ||     0");
  pinMode(incP1,INPUT);
  pinMode(incP2,INPUT);
  //  pinMode(incP1,INPUT_PULLUP);
}

void loop() {
  button1 = digitalRead(incP1);
  button2 = digitalRead(incP2);
  if(button1 == HIGH){
    delay(200);
    P1Score++;
    lcd.setCursor(0,1);
    lcd.print(P1Score);
  }

    if(button2 == HIGH){
    P2Score++;
    delay(200);
    lcd.setCursor(14,1);
    lcd.print(P2Score);
  }

  if (swapCounter == 1){
    // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("P2     ||     P1");
  lcd.setCursor(0,1);
  } else if(swapCounter == 0){
      lcd.begin(16, 2);
  // Print a message to the LCD.
    lcd.print("P1     ||     P2");
    lcd.setCursor(0,1);
  }
  
}
