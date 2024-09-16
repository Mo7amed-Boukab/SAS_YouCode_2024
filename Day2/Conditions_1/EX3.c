#include <stdio.h>

int main ()
{
    int a , b , sum;
    printf("\n *** Somme de Deux Valeurs ***\n\n");
    printf("Entrez deux entier\n");
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    if(a == b)
    {
        sum = 3 * (a+b);
    }
    else
    {
        sum = a+b;
    }
    printf("Le resultat >>> %d",sum);

     return 0;
}