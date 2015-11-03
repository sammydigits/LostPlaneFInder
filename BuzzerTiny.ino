#include "config.h"

bool start = true;
double minVoltage = 1023/5 * LOWVOLTAGE;


void setup() {
  pinMode(2, INPUT);
  pinMode(1, OUTPUT);
  delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
   
  double voltage = getVoltage();
  bool buzzer = true;
 
  if(start == true){
    start = checkVoltage(voltage);
  }else{
    if(voltage < minVoltage){
      buzz(COUNTLOW,COUNTLOW2);
    }else{
      buzzer = checkVoltage(voltage);
      if(buzzer == true){
        buzz(COUNTLOST,COUNTLOST2);
      }
    }
  }
}

void buzz(int count, int count2){
   for(int i=0;i<count;i++){
    for(int k=0;k<count2;k++){
      digitalWrite(1,HIGH);
      delay(500);
      digitalWrite(1,LOW);
      delay(200);
    }
    delay(500);
  }
}

bool checkVoltage(double voltage){
  bool tmp = true;
  for(int i=0;i<20;i++){
    delay(250);
    double result = abs(voltage-getVoltage());
    if(start == true){
      result = result - 2;
    }
    if(result > LOST){
      tmp = false;
    }
  }
  return tmp;
}


double getVoltage(){
   double voltage = 0;
   for(int k=0;k<20;k++){
      voltage = voltage + analogRead(1);
   }
   voltage = voltage/20;

   return voltage;
}

