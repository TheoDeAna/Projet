#include <stdio.h>
#include <stdlib.h>
#include "generationCode.h"

// D�finition de la fonction servant � g�n�rer param.h

void generer(int choix, int choixLed){
    FILE* file = NULL ;
    file = fopen("param.h", "w+") ; // Ouverture du fichier en supprimant son contenu puis mode �criture

	// Diff�rents choix offerts � l'utilisateur dans le menu
	
    switch (choix){
    case 1 :
        fprintf(file, "#define CHOIX allLeds") ;
        break ;
    case 2 :
        fprintf(file, "#define CHOIX halfLeds") ;
        break ;
    case 3 :
        fprintf(file, "#define CHOIX thirdLeds") ;
        break ;
    case 4 :
        fprintf(file, "#define CHOIX oneLed") ;
        break ;
    case 5 :
        fprintf(file, "#define CHOIX caterpillar") ;
        break ;

    }
    if(choix == 4){
        fprintf(file, "\n#define CHOIXLED %i", choixLed) ;
    }else{
        fprintf(file, "\n#define CHOIXLED") ;

	// Fermeture du fichier apr�s �dition
    fclose(file) ;
	}
}
