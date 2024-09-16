#include <stdio.h>
#include <math.h>

int main()
{  
    float a , b , c , Resultat;
    printf("\n*** Calcule de la Moyenne geometrique ***\n\n");
    printf("Entrer le premier nombre >> ");
    scanf("%f",&a);
    printf("Entrer le deuxieme nombre >> ");
    scanf("%f",&b);
    printf("Entrer le troisieme nombre >> ");
    scanf("%f",&c);
    Resultat = pow((a * b * c),(float)1/3) ;
    printf("La Moyenne geometrique >>> %.2f",Resultat);

   

    return 0;
}