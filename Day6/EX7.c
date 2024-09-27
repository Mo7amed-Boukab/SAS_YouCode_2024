#include <stdio.h>


typedef struct{
   char Nom[50];
   float Sold;
 
}Compte_Bancaire;

float Modifier_Compte_Bancaire(Compte_Bancaire x,float Montant_Ajouter)
{

    return x.Sold + Montant_Ajouter;  
}

int main()
{
    Compte_Bancaire cb1;
    float montant;
    printf("Entrez le nom de votre compte >>");
    scanf("%s",&cb1.Nom);
    printf("Entrez le sold de votre compte >>");
    scanf("%f",&cb1.Sold);
    printf("Bienvenu %s, votre sold est %.2f\n",cb1.Nom,cb1.Sold);
    printf("Veuillez ajouter le montant souhaitez >> ");
    scanf("%f",&montant);
    float  modification = Modifier_Compte_Bancaire(cb1,montant);
    printf("\nVotre sold >>> %.2f",modification);
    return 0;
}