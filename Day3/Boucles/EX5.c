#include <stdio.h>

int main()
{
    int Base , Exposant , Resultat = 1;
    printf("\n*** Calcul de la Puissance ***\n\n");
    printf("La Base >> ");
    scanf("%d",&Base);
    printf("Exposant >> ");
    scanf("%d",&Exposant);

    for( int i = 1; i <= Exposant; i++)
    {
       Resultat = Resultat * Base;
    }
    printf("Le resultat >>> %d",Resultat);


    return 0;
}