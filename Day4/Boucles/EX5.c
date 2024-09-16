#include <stdio.h>

int main()
{
    int num , sum = 0;
    printf("\n*** Somme des N Nombres ***\n\n");
    printf("Entrez un nombre >>> ");
    scanf("%d",&num);
    
    for( int i = 1 ; i <= num ; i++)
    {
        sum = sum + i;
    }
    printf("La somme de %d premier nombre >>> %d",num,sum);

    return 0;
}