#include <stdio.h>

int main()
{
    int num;
    printf("\n*** Afficher les Elements Paire ***\n\n");
    printf("Entrez le nombre des elements de Tableau >> ");
    scanf("%d",&num);

    int T[num];
    printf("Remplissez le Tableau\n");
    for( int i = 0 ; i < num ; i++ )
    {
        printf("T[%d] = ",i);
        scanf("%d",&T[i]);
    }
  
    printf("Les elements Paires >>> ");
    for( int i = 0 ; i < num ; i++ )
       if(T[i] % 2 == 0)
           printf("%d ",T[i]);

    return 0;
}