#include <stdio.h>

int main()
{
    int Base , Exposant , Resultat = 1 , i = 1 ;
    printf("\n*** Calcul de la Puissance ***\n\n");
    printf("La Base >> ");
    scanf("%d",&Base);
    printf("L'Exposant >> ");
    scanf("%d",&Exposant);

    while(i <= Exposant)
    {
        Resultat = Resultat * Base;
        i++;
    }

    printf("Le resultat >>> %d",Resultat);
    return 0;
}