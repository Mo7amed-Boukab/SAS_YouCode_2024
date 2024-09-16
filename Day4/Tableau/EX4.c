/*Écrivez un programme C qui trouve et affiche
 le plus grand élément dans un tableau d'entiers. 
Le programme doit demander le nombre d'éléments et les éléments du tableau.*/

#include <stdio.h>

int main()
{
    int num,Plus_Grand;
    printf("\n*** Trouver le Maximum ***\n\n");
    printf("Entrez le nombre des elements de Tableau >> ");
    scanf("%d",&num);
    int T[num];
    printf("Remplissez le Tableau\n");
    for( int i = 0 ; i < num ; i++ )
    {
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }
    Plus_Grand = T[0];
    for( int i = 1 ; i < num ; i++)
    {
        if(T[i] > Plus_Grand ) 
           Plus_Grand = T[i];
    }
    printf("Le Plus Grand >>> %d",Plus_Grand);


    return 0;
}