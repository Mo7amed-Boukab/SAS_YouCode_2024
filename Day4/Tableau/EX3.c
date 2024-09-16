/*Écrivez un programme C qui calcule et affiche la somme des éléments 
d'un tableau d'entiers. Le programme doit demander le nombre d'éléments, 
puis les éléments du tableau, et afficher la somme totale.*/
#include <stdio.h>

int main()
{
    int num , sum = 0;
    printf("\n*** Somme des Elements ***\n\n");
    printf("Entrez le nombre des elements de Tableau >> ");
    scanf("%d",&num);
    int T[num];
    printf("Remplissez le Tableau\n");
    for( int i = 0 ; i < num ; i++ )
    {
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
        sum += T[i];
    }
    printf("La somme Total des elements de Tableau >>> %d",sum);

    return 0;
}