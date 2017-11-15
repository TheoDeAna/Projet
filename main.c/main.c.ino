#include "cardio.h"
#include "coeur.h"
#include "param.h"


void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600) ;
   int i ;
   for (i=4;i<14;i++){
    pinMode(i,HIGH);
   }
}

void loop() {
  // put your main code here, to run repeatedly:
  data donnee ;
  donnee = lireInfo() ;
  
  if(CHOIX == "allLeds"){
    allLeds() ;
  }
  
  if(CHOIX == "halfLeds"){
    halfLeds() ;
  }
  
  if(CHOIX == "thirdLeds"){
    thirdLeds() ;
  }
  
  if(CHOIX == "oneLed"){
    oneLed() ;
  }
  
  if(CHOIX == "caterpillar"){
    caterpillar() ;
  }
  
}
