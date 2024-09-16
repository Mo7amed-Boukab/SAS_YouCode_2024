#include <stdio.h>

int main()
{
    int num , fact = 1; 
    printf("\n*** Calcul de la Factorielle ***\n\n");
    printf("Entrez un nombre >> ");
    scanf("%d",&num);

    for( int i = 1 ; i <= num ; i++ )
    {
        fact = fact * i;
    }
    printf("%d ! >>> %d",num,fact);
    return 0;
}