/*Écrivez un programme C qui demande à l'utilisateur le nombre d'éléments 
d'un tableau, puis demande à l'utilisateur de saisir ces éléments. 
Affichez ensuite les éléments du tableau*/
#include <stdio.h>

int main()
{
    int num ;
    printf("\n*** Saisie et Affichage des Elements ***\n\n");
    printf("Entrez le nombre des elements de Tableau >>> ");
    scanf("%d",&num);
    printf("Remplissez le Tableau\n");
    int T[num];
    for( int i = 0 ; i < num ; i++ )
    {
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }
    printf("\nLes elements entree sont\n");
    for ( int i = 0 ; i < num ; i++)
    {
        printf("T[%d] = %d\n",i+1,T[i]);
    }


  return 0;
}