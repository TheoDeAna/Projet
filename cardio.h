#include <stdio.h>
#include <stdlib.h>

#ifndef CARDIO_H
#define CARDIO_H

#define TIME 500

typedef struct data data ;

struct data{
    int time ;
    float pouls ;
};



data lireInfo() ;

float calculPouls(long time, long previousTime) ;

#endif
