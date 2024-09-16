#include <stdio.h>

int main()
{
    int num , index , Remplacer;
    printf("\n*** Remplacer un Element ***\n\n");
    printf("Entrez le nombre des elements de Tableau >>> ");
    scanf("%d",&num);
    int T[num];
    printf("Remplissez le Tableau\n");
    for( int i = 0 ; i < num ; i++ )
    {
        printf("T[%d] = ",i);
        scanf("%d",&T[i]);
    }
    printf("Entrez l'index de l'element >>> ");
    scanf("%d",&index);
    printf("Entrez l'element a remplacer >>> ");
    scanf("%d",&Remplacer);

    for( int i = 0 ; i < num ; i++ )
    {
        if(i == index)
        {
            T[i] = Remplacer;
            break;
        }        
    }
printf("Le Tableau apres modification\n");
for( int i = 0 ; i < num ; i++ )
    {
        printf("T[%d] = %d\n",i,T[i]);
    }

    return 0;
}