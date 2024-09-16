#include <stdio.h>

int main()
{
    int num;
    printf("\n*** Copie d'un Tableau ***\n\n");
    printf("Entrez le nombre des elements de Tableau >>> ");
    scanf("%d",&num);
    int T[num];
    int Copie[num];
    printf("Remplissez le Tableau\n");
    for( int i = 0 ; i < num ; i++ )
    {
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
        Copie[i] = T[i];
    }
    printf("Les elements de Tableau\n");
    for( int i = 0 ; i < num ; i++)
    {
        printf("T[%d] = %d\n",i+1,T[i]);
    }
   printf("Les elements de Copie\n");
   for( int i = 0 ; i < num ; i++)
    {
        printf("Copie[%d] = %d\n",i+1,Copie[i]);
    }

    return 0;
}