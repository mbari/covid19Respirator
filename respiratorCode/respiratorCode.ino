#include <LiquidCrystal.h>


////DIGITAL INPUTS
//int digitalInput1 = 37;
//int digitalInput2 = 36;
//int digitalInput3 = 35;
//int digitalInput4 = 34;
//int digitalInput5 = 33;
//int digitalInput6 = 32;
//int digitalInput7 = 31;
//int digitalInput8 = 30;
//


//DIGITAL OUTPUTS
int solenoidValve1 = 6;
int solenoidValve2 = 7;
int solenoidValve3 = 53;


//int digitalOutput4 = 5;
//int digitalOutput5 = 2;
//int digitalOutput6 = 3;
//int digitalOutput7 = 10;
//int digitalOutput8 = 12;
////int pwrkey = 22;


//ON BOARD LED
int onBoardLed = 49;
int buzzer     = 42;

//Keypad Interface
int keypad1 = 48;//PL1
int keypad2 = 47;//PL2
int keypad3 = 46;//PL3
int keypad4 = 45;//PL4
int keypad5 = 44;//PL5
int keypad6 = 43;//PL6
int keypad7 = 38;
int keypad8 = 40;

int pwmPin1 = 4;
int pwmPin2 = 8;
int pwmPin3 = 9;
int pwmPin4 = 11;

int modBusEnable = 41;// unused for now

//LCD
int lcd_en = 23;
int lcd_rs = 24;
int lcd_d4 = 25;
int lcd_d5 = 26;
int lcd_d6 = 27;
int lcd_d7 = 28;

LiquidCrystal lcd(lcd_rs, lcd_en, lcd_d4, lcd_d5 , lcd_d6, lcd_d7);

int pressureSensor1 = A0;// analog input 0
int pressureSensor2 = A1;// analog imput 1
int flowSensor1 = A2;
int flowSensor2 = A3;





void setup() {
  initialiseIO();
  Serial.begin(115200);
  Serial.println("Hello World");
}

void loop() {
}

void initialiseIO() {
  pinMode( solenoidValve1, OUTPUT);
  pinMode( solenoidValve2, OUTPUT);
  pinMode( solenoidValve3, OUTPUT);
}
