#include <stdio.h>

int main()
{
    int num , Diviseur;
    printf("\n*** Facteurs d'un Nombre ***\n\n");
    printf("Entrez un nombre >> ");
    scanf("%d",&num);
    printf("Les facteurs de %d >>> ",num);

    for( int i = 1 ; i <= num ; i++)
    {
        if(num % i == 0)
           printf("%d ",i);
    }

    return 0;
}