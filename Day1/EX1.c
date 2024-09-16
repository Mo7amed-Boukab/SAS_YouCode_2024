#include <stdio.h>

int main()
{
    char Nom[20] , PreNom[20] , Sexe[20] , Phone[50];
    int Age ;
    printf("\n*** Affichage Informations ***\n\n");
    printf("Saisie votre Nom >> ");
    scanf("%s",&Nom);
    printf("Saisie votre PreNom >> ");
    scanf("%s",&PreNom);
    printf("Saisie votre Sexe >> ");
    scanf("%s",&Sexe);
    printf("Saisie votre Age >> ");
    scanf("%d",&Age);
    printf("Saisie votre numero de telephone >> ");
    scanf("%s",&Phone);

    printf("\nVotre Nom complet est %s %s\nvous etez %s et vous avez %d ans\nvotre numero de telephone est %s ",Nom,PreNom,Sexe,Age,Phone);
    return 0;
}