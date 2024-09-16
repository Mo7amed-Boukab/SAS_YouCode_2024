#include <stdio.h>

int main()
{  
    float N1 , N2 , N3 , Resultat;
    int P1 = 2 , P2 = 3 , P3 = 5;
    printf("\n*** Moyenne ponderee de trois nombres ***\n\n");
    printf("Entrer le premier nombre >> ");
    scanf("%f",&N1);
    printf("Entrer le deuxieme nombre >> ");
    scanf("%f",&N2);
    printf("Entrer le troisieme nombre >> ");
    scanf("%f",&N3);
    Resultat = ( N1 * P1 + N2 * P2 + N3 * P3 ) / P1 + P2 + P3 ;
    printf("La moyenne ponderee de trois nombres >>> %.2f",Resultat);

   

    return 0;
}