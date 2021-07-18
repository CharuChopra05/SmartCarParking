

#include <LiquidCrystal.h>
const int buttonPin = 7;     // the number of the pushbutton pin
const int buttonPin1 = A0;
const int buttonPin2 = 9;
const int buttonPin3 = 10;
const int buttonPin4 = A1;
int ledPin =13; // LED connected to pin 13 or onboard LED 
int ledPin1 =8; // LED connected to pin 13 or onboard LED
// variables will change:
//void check1();
int buttonState = 0;  
int buttonState1 = 0; 
int buttonState2 = 0; 
int buttonState3 = 0; 
int buttonState4 = 0;
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  pinMode(buttonPin, INPUT);
   pinMode(buttonPin1, INPUT);
    pinMode(buttonPin2, INPUT);
     pinMode(buttonPin3, INPUT);
     pinMode(buttonPin4, INPUT);
     Serial.begin(9600);
     pinMode(ledPin, OUTPUT); // set ledPin as OUTPUT 
pinMode(ledPin1, OUTPUT); // set ledPin as OUTPUT 
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  
  // Print a message to the LCD.
  

}

void loop() {
  
    buttonState = digitalRead(buttonPin);
     buttonState1 = digitalRead(buttonPin1);
      buttonState2 = digitalRead(buttonPin2);
       buttonState3 = digitalRead(buttonPin3);
       buttonState4 = digitalRead(buttonPin4);
    lcd.setCursor(0, 0);
lcd.print("ok            ");
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  check2();

}
void check2()
{if (buttonState == HIGH) 
{//ir sesnor
    // turn LED on:
    lcd.setCursor(0, 0); // top left
   lcd.print("parking systen");
   digitalWrite(ledPin, HIGH); // turn ledPin Off 
   digitalWrite(ledPin1, HIGH); // turn ledPin Off 
   delay(800);
   check1();
  }
 else{}    
  
}

void check1()
{
  if (buttonState1 == LOW) 
{lcd.clear();
    // turn LED on:
    lcd.setCursor(0, 0); // top left
   lcd.print("park in slot1");
   Serial.println("park in slot1"); 
   digitalWrite(ledPin, LOW); // turn ledPin Off 
   digitalWrite(ledPin1, HIGH); // turn ledPin Off 
   delay(400);
   digitalWrite(ledPin, HIGH); // turn ledPin Off 
   digitalWrite(ledPin1, HIGH); // turn ledPin Off 
      delay(1000);
        digitalWrite(ledPin, HIGH); // turn ledPin Off 
   digitalWrite(ledPin1, LOW); // turn ledPin Off 
   delay(400);
   digitalWrite(ledPin, HIGH); // turn ledPin Off 
   digitalWrite(ledPin1, HIGH); // turn ledPin Off 
    digitalWrite(ledPin, HIGH);
   Serial.print("\r");
  delay(1000);                  
  Serial.print("AT+CMGF=1\r");    
  delay(1000);
  Serial.print("AT+CMGS=\"+918146303704\"\r");    //Number to which you want to send the sms
  delay(1000);
  Serial.print("Part in Slot1\r");   //The text of the message to be sent
  delay(1000);
  Serial.write(0x1A);
  delay(1000);

//  delay(5000); 

  delay(1000);
 softReset();
  }
     if (buttonState2 == LOW) 
     {lcd.clear();
    // turn LED on:
    lcd.setCursor(0, 0); // top left
   lcd.print("park in slot2");
    Serial.println("park in slot2");
   digitalWrite(ledPin, LOW); // turn ledPin Off 
   digitalWrite(ledPin1, HIGH); // turn ledPin Off 
   delay(400);
   digitalWrite(ledPin, HIGH); // turn ledPin Off 
   digitalWrite(ledPin1, HIGH); // turn ledPin Off 
      delay(1000);
        digitalWrite(ledPin, HIGH); // turn ledPin Off 
   digitalWrite(ledPin1, LOW); // turn ledPin Off 
   delay(400);
   digitalWrite(ledPin, HIGH); // turn ledPin Off 
   digitalWrite(ledPin1, HIGH); // turn ledPin Off 
      Serial.print("\r");
  delay(1000);                  
  Serial.print("AT+CMGF=1\r");    
  delay(1000);
  Serial.print("AT+CMGS=\"+918146303704\"\r");    //Number to which you want to send the sms
  delay(1000);
  Serial.print("Part in Slot2\r");   //The text of the message to be sent
  delay(1000);
  Serial.write(0x1A);
  delay(1000);
   softReset();
  }
     if (buttonState4 == LOW) 
     {lcd.clear();
    // turn LED on:
    lcd.setCursor(0, 0); // top left
   lcd.print("park in slot3");
    Serial.println("park in slot3");
   digitalWrite(ledPin, LOW); // turn ledPin Off 
   digitalWrite(ledPin1, HIGH); // turn ledPin Off 
   delay(400);
   digitalWrite(ledPin, HIGH); // turn ledPin Off 
   digitalWrite(ledPin1, HIGH); // turn ledPin Off 
      delay(1000);
        digitalWrite(ledPin, HIGH); // turn ledPin Off 
   digitalWrite(ledPin1, LOW); // turn ledPin Off 
   delay(400);
   digitalWrite(ledPin, HIGH); // turn ledPin Off 
   digitalWrite(ledPin1, HIGH); // turn ledPin Off 
      Serial.print("\r");
  delay(1000);                  
  Serial.print("AT+CMGF=1\r");    
  delay(1000);
  Serial.print("AT+CMGS=\"+918146303704\"\r");    //Number to which you want to send the sms
  delay(1000);
  Serial.print("Part in Slot3\r");   //The text of the message to be sent
  delay(1000);
  Serial.write(0x1A);
  delay(1000);
   softReset();
  }
  if (buttonState3 == LOW) 
     {lcd.clear();
    // turn LED on:
    lcd.setCursor(0, 0); // top left
   lcd.print("park in slot4");
    Serial.println("park in slot4");
   digitalWrite(ledPin, LOW); // turn ledPin Off 
   digitalWrite(ledPin1, HIGH); // turn ledPin Off 
   delay(400);
   digitalWrite(ledPin, HIGH); // turn ledPin Off 
   digitalWrite(ledPin1, HIGH); // turn ledPin Off 
      delay(1000);
        digitalWrite(ledPin, HIGH); // turn ledPin Off 
   digitalWrite(ledPin1, LOW); // turn ledPin Off 
   delay(400);
   digitalWrite(ledPin, HIGH); // turn ledPin Off 
   digitalWrite(ledPin1, HIGH); // turn ledPin Off
      Serial.print("\r");
  delay(1000);                  
  Serial.print("AT+CMGF=1\r");    
  delay(1000);
  Serial.print("AT+CMGS=\"+918146303704\"\r");    //Number to which you want to send the sms
  delay(1000);
  Serial.print("Part in Slot4\r");   //The text of the message to be sent
  delay(1000);
  Serial.write(0x1A);
  delay(1000);
  softReset(); 
  }
  else
  {   
    lcd.clear();
    lcd.setCursor(0, 0); // top left
   lcd.print("FULL");
    delay(3000);
    softReset();
  
  }
}


void softReset(){
asm volatile ("  jmp 0");
}
