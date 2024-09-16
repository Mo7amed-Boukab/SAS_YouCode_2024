/*Écrivez un programme C qui demande un nombre à l’utilisateur et affiche la table de multiplication de 1 à 10 
pour ce nombre. En plus, affichez la somme des produits.*/

#include <stdio.h>

int main()
{
    int num , sum = 0;
    printf("\n*** Table de Multiplication avec Somme ***\n\n");
    printf("Entrez un nombre >> ");
    scanf("%d",&num);

    for( int i = 1 ; i <= 10 ; i++ )
    {
        printf("%d * %d = %d \n",num,i,num*i);
        sum = sum + (num * i);
    }
    printf("La somme des Produits >>> %d",sum);
    
    return 0; 
}