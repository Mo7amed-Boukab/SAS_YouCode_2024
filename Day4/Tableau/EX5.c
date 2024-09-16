#include <stdio.h>

int main()
{
    int num , Plus_Petit;
    printf("\n*** Trouver le Minimum ***\n\n");
    printf("Entrez le nombre des elements de Tableau >> ");
    scanf("%d",&num);
    int T[num];
    printf("Remplissez le Tableau\n");
    for( int i = 0 ; i < num ; i++ )
    {
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }
    Plus_Petit = T[0];
    
    for( int i = 1 ; i < num ; i++)
    {
        if(T[i] < Plus_Petit ) 
           Plus_Petit = T[i];
    }
    printf("Le Plus Petit >>> %d",Plus_Petit);


    return 0;
}