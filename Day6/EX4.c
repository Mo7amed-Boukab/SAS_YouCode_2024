#include <stdio.h>


typedef struct{
    char Titre[50];
    char Auteur[50];
    int Annee;
}Livre;
 
 void livre(Livre x)
 {
     printf("------------------------------------\n");
    printf("Le titre de livre >>> %s\n",x.Titre);
    printf("L'auteur de livre >>> %s\n",x.Auteur);
    printf("L'annee de publication >>> %d\n",x.Annee);
 };

int main()
{
    Livre L1;

    printf("Entrez le tittre >> ");
    scanf("%s",L1.Titre);
    printf("Entrez l'auteur >> ");
    scanf("%s",L1.Auteur);
    printf("Entrez l'annee >> ");
    scanf("%d",&L1.Annee);
    livre(L1);
    return 0;
}