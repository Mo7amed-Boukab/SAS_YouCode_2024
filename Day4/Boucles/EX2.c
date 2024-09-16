#include <stdio.h>

int main()
{
    int num , i , j , cpt = 0;
    printf("\n *** pyramide d'etoile ***\n\n");
    printf("Entrez un nombre >>> ");
    scanf("%d",&num);

    for(i = num ; i > 0 ; i--)
    {
        for(j = 1 ; j <= (num * 2) - 1 ; j++)
        {
            if(j < i || j > i+cpt)   printf(" ");
            else   printf("*");
        }
        printf("\n");
        cpt = cpt + 2;
    }

    return 0;
}