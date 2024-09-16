#include <stdio.h>

int main()
{
    int x , m , j , h , s;
    printf(" *** convertion de l'annee ***\n\n");
    printf("Tapez (1) pour la convertir en Mois\n");
    printf("Tapez (2) pour la convertir en Jours\n");
    printf("Tapez (3) pour la convertir en Heures\n");
    printf("Tapez (4) pour la convertir en Secondes\n");
    scanf("%d",&x);

    m = 12;
    j = 365;
    h = j*24;
    s = h*60*60;
 
    if(x == 1)
    {
        printf("L'annee en Mois >>> %d mois",m);
    }
    else if(x == 2)
    {
        printf("L'annee en Jour >>> %d jours",j);
    }
    else if(x == 3)
    {
        printf("L'annee en heure >>> %d heures",h);
    }
    else if(x == 4)
    {
        printf("L'annee en seconde >>> %d secondes",s);
    }

    return 0;
}