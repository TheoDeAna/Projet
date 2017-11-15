#include <stdio.h>
#include <stdlib.h>

#include "menu.h"
#include "generationCode.h"

int main()
{
    int choix, choixLed ;

    printf("%s", afficherMenuLeds());
    scanf("%i", &choix);
    if(choix == 4){
        printf("\nEntrer votre choix de LED (1-10) : ") ;
        scanf("%i", &choixLed) ;
    }
    generer(choix, choixLed) ;

    return 0 ;
}
