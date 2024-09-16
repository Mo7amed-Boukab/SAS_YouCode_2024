#include <stdio.h>

int main()
{  
    float a , b;
    printf("\n*** Calcul et affichage des resultats ***\n\n");
    printf("Entrer le premier nombre\n a = ");
    scanf("%f",&a);
    printf("Entrer le deuxieme nombre\n b = ");
    scanf("%f",&b);
    printf("%.2f + %.2f = %.2f\n",a,b,a+b);
    printf("%.2f - %.2f = %.2f\n",a,b,a-b);
    printf("%.2f * %.2f = %.2f\n",a,b,a*b);
    printf("%.2f / %.2f = %.2f\n",a,b,a/b);

    return 0;
}