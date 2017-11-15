#include <stdio.h>
#include <stdlib.h>

#include "menu.h"
#include "generationCode.h"

int main(){
	// Définition des variables
    int choix, choixLed ;
	// Affichage du menu et intéraction entre le menu et l'utilisateur (Mode d'allumage, choix de la LED pour mode d'allumage seul)
    printf("%s", afficherMenuLeds());
    scanf("%i", &choix);
    if(choix == 4){
        printf("\nEntrer votre choix de LED (1-10) : ") ;
        scanf("%i", &choixLed) ;
    }
    // Génération du fichier param.h
    generer(choix, choixLed) ;

    return 0 ;
}
