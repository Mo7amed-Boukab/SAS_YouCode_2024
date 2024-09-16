#include <stdio.h>

int main()
{
    int num , sum = 0 , Moyenne;
    printf("\n*** Calculer la Moyenne ***\n\n");
    printf("Entrez le nombre des elements de Tableau >> ");
    scanf("%d",&num);

    int T[num];
    printf("Remplissez le Tableau\n");
    for( int i = 0 ; i < num ; i++ )
    {
        printf("T[%d] = ",i);
        scanf("%d",&T[i]);
        sum += T[i];
    }
    Moyenne = sum / num;
    printf("La moyenne des elements de Tableau >>> %d",Moyenne);

    return 0;
}