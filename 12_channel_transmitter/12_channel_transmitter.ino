/*transmitter*/ 
 #include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

const int buttonPin1=A0;
const int buttonPin2=A1;
const int buttonPin3=A2;
const int buttonPin4=A3;
const int buttonPin5=A4;
const int buttonPin6=A5;
const int buttonPin7=2;
const int buttonPin8=3;
const int buttonPin9=4;
const int buttonPin10=5;
const int buttonPin11=6;
const int buttonPin12=7;

int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int buttonState5 = 0;
int buttonState6 = 0;
int buttonState7 = 0;
int buttonState8 = 0;
int buttonState9 = 0;
int buttonState10 = 0;
int buttonState11 = 0;
int buttonState12 = 0;

RF24 radio(9, 10); // CE, CSN

const byte address[9] = "22022003";

void setup() {
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
  pinMode(buttonPin5, INPUT);
  pinMode(buttonPin6, INPUT);
  pinMode(buttonPin7, INPUT);
  pinMode(buttonPin8, INPUT);
  pinMode(buttonPin9, INPUT);
  pinMode(buttonPin10, INPUT);
  pinMode(buttonPin11, INPUT);
  pinMode(buttonPin12, INPUT);

  Serial.begin(9600);
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();
}
void loop() {
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  buttonState4 = digitalRead(buttonPin4);
  buttonState5 = digitalRead(buttonPin5);
  buttonState6 = digitalRead(buttonPin6);
  buttonState7 = digitalRead(buttonPin7);
  buttonState8 = digitalRead(buttonPin8);
  buttonState9 = digitalRead(buttonPin9);
  buttonState10 = digitalRead(buttonPin10);
  buttonState11 = digitalRead(buttonPin11);
  buttonState12 = digitalRead(buttonPin12);
 

  if (buttonState1 == 1)
  {
   buttonState1 == 1;
  }
  else  if (buttonState1 == 0)
  {
    buttonState1 = 0;
  }
  if (buttonState2 == 1)
  {
    buttonState2 = 3;
  }
  else  if (buttonState2 == 0)
  {
    buttonState2 = 2;
  }
 if (buttonState3 == 1)
  {
    buttonState3 = 5;
  }
  else  if (buttonState3 == 0)
  {
    buttonState3 = 4;
  }
  if (buttonState4 == 1)
  {
    buttonState4 = 7;
  }
  else  if (buttonState4 == 0)
  {
    buttonState4 = 6;
  }
  if (buttonState5 == 1)
  {
    buttonState5 = 9;
  }
  else  if (buttonState5 == 0)
  {
    buttonState5 = 8;
  }
  if (buttonState6 == 1)
  {
    buttonState6 = 11;
  }
  else  if (buttonState6 == 0)
  {
    buttonState6 = 10;
  }
  if (buttonState7 == 1)
  {
    buttonState7 = 13;
  }
  else  if (buttonState7 == 0)
  {
    buttonState7 = 12;
  }
  if (buttonState8 == 1)
  {
    buttonState8 = 15;
  }
  else  if (buttonState8 == 0)
  {
    buttonState8 = 14;
  }
  if (buttonState9 == 1)
  {
    buttonState9 = 17;
  }
  else  if (buttonState9 == 0)
  {
    buttonState9 = 16;
  }
  if (buttonState10 == 1)
  {
    buttonState10 = 19;
  }
  else  if (buttonState10 == 0)
  {
    buttonState10 = 18;
  }
  if (buttonState11 == 1)
  {
    buttonState11 = 21;
  }
  else  if (buttonState11 == 0)
  {
    buttonState11 = 20;
  }
  if (buttonState12 == 1)
  {
    buttonState12 = 23;
  }
  else  if (buttonState12 == 0)
  {
    buttonState12 = 22;
  }

  Serial.print(buttonState1);
  Serial.print("\t");
  Serial.print(buttonState2);
  Serial.print("\t");
  Serial.print(buttonState3);
  Serial.print("\t");
  Serial.print(buttonState4);
  Serial.print("\t");
  Serial.print(buttonState5);
  Serial.print("\t");
  Serial.print(buttonState6);
  Serial.print("\t");
  Serial.print(buttonState7);
  Serial.print("\t");
  Serial.print(buttonState8);
  Serial.print("\t");
  Serial.print(buttonState9);
  Serial.print("\t");
  Serial.print(buttonState10);
  Serial.print("\t");
  Serial.print(buttonState11);
  Serial.print("\t");
  Serial.print(buttonState12);
  radio.write(&buttonState1, sizeof(buttonState1));
  radio.write(&buttonState2, sizeof(buttonState2));
  radio.write(&buttonState3, sizeof(buttonState3));
  radio.write(&buttonState4, sizeof(buttonState4));
  radio.write(&buttonState5, sizeof(buttonState5));
  radio.write(&buttonState6, sizeof(buttonState6));
  radio.write(&buttonState7, sizeof(buttonState7));
  radio.write(&buttonState8, sizeof(buttonState8));
  radio.write(&buttonState9, sizeof(buttonState9));
  radio.write(&buttonState10, sizeof(buttonState10));
  radio.write(&buttonState11, sizeof(buttonState11));
  radio.write(&buttonState12, sizeof(buttonState12));
}
