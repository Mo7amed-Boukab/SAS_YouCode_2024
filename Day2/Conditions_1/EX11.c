#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int j;
    printf("\n*** Affiche Aleatoire des Jours de la Semaine ***\n\n");
    srand(time(0));
    j = rand() % 7 ;
    switch (j)
    {
    case 1 :
        printf(">>> Lundi");
        break;
    case 2 :
        printf(">>> Mardi");
        break;
    case 3 :
        printf(">>> Mercredi");
        break;
    case 4 :
        printf(">>> Jeudi");
        break;
    case 5 :
        printf(">>> Vendredi");
        break;
    case 6 :
        printf(">>> Samedi");
        break;    
    
    default:
        printf(">>> Dimanche");
        break;
    }
    return 0;
}