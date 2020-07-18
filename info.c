#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void affiche(int tableau[] , int nombreCase)
{
   int i, compteur = 1;
    
    for(i = 0 ; i < nombreCase ; i++)
    {
        printf("tableau[%d] = %d\n",compteur, tableau[i]);
        compteur++;
    }
}

int somme(int tableau[] , int nombreCase)
{
    int i, resultat = 0;

    for(i = 0; i < nombreCase ; i++)
    {
        resultat += tableau[i];
    }
    return resultat;
}

double moyenne(int resultat , int nombreCas)
{
    int moyenne = 0;

    moyenne = resultat / nombreCas;

    return moyenne;
}

void copie(int tableauOriginal[], int tableauCopie[], int nombreCase)
{
    int i;

    for(i = 0 ; i < nombreCase ; i++)
    {
        tableauOriginal[i] = tableauCopie[i];
    }
}

void maximumTableau(int tableau[], int nombreCase, int valeurMax)
{
    int i;

    for(i = 0 ; i < nombreCase ; i++)
    {
        if(tableau[i] > valeurMax)
        {
            tableau[i] = 0;
            printf("%d", tableau[i]);
        }
        else
        {
            printf("%d", tableau[i]);
        }
        
    }
}

void range(int tableau[], int nombreCase)
{
    int i,compteur = 1;

    while (tableau[0] > tableau[1] && tableau[1] > tableau[2] && tableau[2] > tableau[3] && tableau[3] > tableau[4])
    {
    

        if(tableau[0] < tableau[1])
        {
            tableau[0] = tableau[1];
        }
        else if(tableau[1] < tableau[2])
        {
            tableau[1] = tableau[2];
        }
        else if(tableau[2] < tableau[3])
        {
            tableau[2] = tableau[3];
        }
        else if(tableau[3] < tableau[4])
        {
            tableau[3] = tableau[4];
        }
        else
        {
            printf("vous avez remis en ordres vos valeurs\n");
            
            for(i = 0 ; i < nombreCase ; i++)
            {
                printf("tableau[%d] = %d",compteur , tableau[i]);
                compteur++;
            }
        }
   }

    
}