#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("\n*** Somme des N Nombres ***\n\n");
    printf("Entrez un nombre >> ");
    scanf("%d",&num);
    for( int i = 1 ; i <= num ; i++)
    {
     sum += i;
    }
    printf("Le resultat >>> %d ",sum);

    return 0;
}