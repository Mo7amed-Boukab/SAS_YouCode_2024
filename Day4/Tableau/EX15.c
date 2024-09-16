#include <stdio.h>

int main()
{
    int X1 , X2 ;
    printf("\n*** Fusion de Deux Tableaux ***\n\n");
    printf("Entrez le nombre des elements de Tableau 1: ");
    scanf("%d",&X1);
    printf("Entrez le nombre des elements de Tableau 2: ");
    scanf("%d",&X2);

    int T1[X1] , T2[X2] , Fusion[X1 + X2];

    printf("Remplissez le Tableau 1\n");
    for( int i = 0 ; i < X1 ; i++ )
    {
        printf("T1[%d] = ",i);
        scanf("%d",&T1[i]);
        Fusion[i] = T1[i];
    }

    printf("\nRemplissez le Tableau 2\n");
    for( int i = X1 ; i < (X1 + X2) ; i++ )
    {
        printf("T2[%d] = ",i-X1);
        scanf("%d",&T2[i]);
        Fusion[i] = T2[i];
    }
    printf("\nLe Tableau de Fusion\n");
     for( int i = 0 ; i < (X1 + X2) ; i++ )
    { 
        printf("T[%d] = %d\n",i,Fusion[i]);
    }


    return 0;
}