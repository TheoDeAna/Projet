#include "param.h"
#include "cardio.h"
#include <Arduino.h>

void allLeds(){
  // put your main code here, to run repeatedly:
  int i ;
  for (i=4;i<14;i++){
    digitalWrite(i,HIGH);
  }
  
  delay(TIME/3);


  for (i=4;i<14;i++){
    digitalWrite(i,LOW);
  }
delay(TIME*2/3);
  
}
void halfLeds(){
    // put your main code here, to run repeatedly:
  int i ;
  for (i=4;i<14;i=i+2){
    digitalWrite(i,HIGH);
    digitalWrite(i+1,LOW);
  }
  
  delay(TIME/3);

  for (i=4;i<14;i=i+2){
    digitalWrite(i,LOW);
    digitalWrite(i+1,HIGH);
  }

  delay(TIME*2/3);
  
}

void thirdLeds(){
  int i ;
  for (i=4;i<14;i=i+3){
    digitalWrite(i,HIGH);
    digitalWrite(i+1,LOW);
    digitalWrite(i+2,LOW);

  }
  
  delay(TIME);

  for (i=4;i<14;i=i+3){
    digitalWrite(i,LOW);
    digitalWrite(i+1,HIGH);
    digitalWrite(i+2,LOW);
  }

  delay(TIME);

    for (i=4;i<14;i=i+3){
    digitalWrite(i,LOW);
    digitalWrite(i+1,LOW);
    digitalWrite(i+2, HIGH);
  }

  delay(TIME);
}



/*void oneLed(){
    digitalWrite(CHOIXLED, HIGH);
    delay(TIME/3);
    digitalWrite(CHOIXLED, LOW);
    delay(TIME*2/3);
}*/

void caterpillar(){
  int i ;
  for(i=4;i<14;i++){
    digitalWrite(i,HIGH);
    delay(TIME/2) ;
    digitalWrite(i,LOW);
    delay(TIME*2/3);
  }
}


