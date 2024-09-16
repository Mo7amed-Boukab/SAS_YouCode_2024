#include <stdio.h>

int main()
{
    int num , inverse = 0;
    printf("\n*** Inversion d'un Entier ***\n\n");
    printf("Entrez un nombre >>> ");
    scanf("%d",&num);
    while(num != 0)
    {
          inverse = inverse * 10 + num % 10;
          num = num / 10 ;
    }
    printf("L'inverse >>> %d",inverse);

    return 0;
}