#include <stdio.h>
#include <stdlib.h>
#include <Arduino.h>
#include <math.h>

#include "cardio.h"

// Recupere les donnees de l'arduino
data lireInfo(){
    // initialisation des variables
    long time, previousTime ;
    int valeur, seuil ;
    data donnee ;
    seuil = 650 ;

    // on recupere le temps du debut d'execution de la fonction
    previousTime = millis() ;

    // On attend qu'une pulsation soit detectee et on conserve le temps correpondant a celle ci
    do{
        valeur = analogRead(0) ;
        Serial.println(valeur) ;
        time = millis() ;
    }while(valeur < seuil) ;

    // On stocke le temps d'apparition de la pulsation
    donnee.time = time ;
    // On calcul et on stocke le pouls
    donnee.pouls = calculPouls(time, previousTime) ;

    // On retourne les resultats

    return(donnee) ;
}


// Calcul le pouls
float calculPouls(long time, long previousTime){
    return (1.0/((time+500)/60000-previousTime/60000)) ;
}


