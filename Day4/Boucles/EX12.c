/*Écrivez un programme C qui implémente l'algorithme de tri par bulles pour trier un tableau d’entiers. 
Le programme doit demander à l’utilisateur le nombre d’éléments, puis les éléments eux-mêmes,
 et enfin afficher le tableau trié.
*/

#include <stdio.h>

int main()
{
    int size , temp;
    printf("\n*** Tri par Bulles ***\n\n");
    printf("Entrez le nombre des elements de tableau >> ");
    scanf("%d",&size);
    int T[size];
    printf("Entrez les elements de tableau >>\n");

    for( int i = 0 ; i < size ; i++ )
    {
        scanf("%d",&T[i]);
    }
    
    for( int i = 0 ; i < size ; i++ )
    {
        for( int j = 0 ; j < size - i ; j++ )
        {
            if( T[j + 1] < T[j] )
            {
                temp = T[j + 1];
                T[j + 1] = T[j];
                T[j] = temp;
            }
        }
    } 
    printf("Le Tableau Tri >>> ");
    for( int i = 0 ; i < size ; i++ )
    {
        printf("%d ",T[i]);
    }
    
    return 0; 
}