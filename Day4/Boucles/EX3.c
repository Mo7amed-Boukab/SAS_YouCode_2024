#include <stdio.h>

int main()
{
    int num;
    printf("\n *** Affichage des Nombres Premiers ***\n\n");
    printf("Entrez un nombre >> ");
    scanf("%d",&num);
    printf("Les nombres premier jusqu'a %d >>>\n",num);
    
    for ( int i = 2 ; i <= num ; i++ )
    {
        int est_premier = 1;
        for( int j = 2 ; j <= i/2 ; j++ )
        {
            if(i % j == 0)  
            {
               est_premier = 0;
               break;
            }         
        }
        if(est_premier == 1)
            printf("%d\n",i);
    }

    return 0;
}