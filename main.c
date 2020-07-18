#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "info.h"


int main(int argc, char *argv[])
{
    int tableau[5] = {0};
    int compteurValeur = 0, compteurTab = 1, choixUtilis = 0, resultatSom = 0, valeurMax = 0;

    printf("voici la calculatrice.c a 5 valeurs...\n");
    printf("veuillez choisir vos valeurs\n");

    for(compteurValeur = 0; compteurValeur < 5; compteurValeur++)
    {
        printf("valeur[%d] :",compteurTab);
        scanf("%d", &tableau[compteurValeur]);
        compteurTab++; 
    }

    printf("vos nombres sont:\n");
    affiche(tableau, 5);
    printf("quelle opération voulez vous faire?\n\n");
    printf("1.Somme\n");
    printf("2.Moyenne\n");
    printf("3.Faire un max avec choix\n");
    printf("4.Ranger les valeurs");
    scanf("%d",&choixUtilis);

    resultatSom = somme(tableau, 5);

    switch(choixUtilis)
    {
        case 1:
            printf("la somme de toutes les valeurs = %d\n",resultatSom);
            break;
        case 2:
            printf("la moyenne est égale à %f", moyenne(resultatSom, 5));
            break;
        case 3:
            printf("veuillez choisir votre valeur max:");
            scanf("%d",&valeurMax);
            maximumTableau(tableau, 5,valeurMax);
            break;
        case 4:
            range(tableau, 5);
            break;
        default:
            printf("le numéro indiqué n'est pas correct.\n");
            break;

    }

    return 0;
}