/*Écrivez un programme C pour déterminer le plan de retraite en fonction de :

Années de cotisation
Montant total épargné (en euros)
Les plans sont :

 age >= 65 ans et Années de cotisation >= 30 ans et Montant >= 100 000 € : Plan complet avec pension élevée
 age >= 65 ans et Années de cotisation >= 20 ans et Montant >= 50 000 € : Plan partiel avec pension moyenne
 age < 65 ans : Plan épargne non encore disponible
Ajoutez un bonus de 5% pour chaque tranche de 10 000 € au-delà de 50 000 € épargnés.

*/

#include <stdio.h>

int main()
{
    int age , annee_cotisation;
    float montant_epargne;
    printf("\n*** Plan de Retraite avec Epargne ***\n\n");
    printf("Entrez votre age >> ");
    scanf("%d",&age);
    printf("Entrez les annees de cotisation >> ");
    scanf("%d",&annee_cotisation);
    printf("Entrez le montant totale d'epargne >> ");
    scanf("%f",&montant_epargne);

    if(age >= 65 && annee_cotisation >= 30 && montant_epargne >= 100000)
    {
        printf(">>> Plan complet avec pension elevee");
    }
    else if(age >= 65 && annee_cotisation >= 20 && montant_epargne >= 50000)
    {
        printf(">>> Plan partiel avec pension moyenne");
    }
    else
    {
        printf(">>> Plan d'epargne non encore disponible");
    }
    return 0;
}