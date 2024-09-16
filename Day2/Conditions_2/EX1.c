/*Écrivez un programme C qui évalue l'éligibilité pour un prêt en fonction de :

Revenu annuel (en euros)
Score de crédit (sur 1000)
Durée du prêt (en années)
Les conditions pour l'éligibilité sont :

Revenu >= 30 000 € et Score de crédit >= 700 et Durée du prêt <= 10 ans : Éligible
Revenu >= 30 000 € et Score de crédit >= 650 et Durée du prêt <= 15 ans : Éligible avec conditions
Revenu < 30 000 € ou Score de crédit < 650 ou Durée du prêt > 15 ans : Non éligible
Affichez un message en fonction de l'éligibilité.
*/

#include <stdio.h>

int main()
{
    float revenu_annuel , score_credit , duree_pret;
    printf("\n*** Evaluation d'un Pret ***\n\n");

    printf("Entrez votre revenu annuel >> ");
    scanf("%f",&revenu_annuel);
    printf("Entrez votre score de credit >> ");
    scanf("%f",&score_credit);
    printf("Entrez la duree de pret >> ");
    scanf("%f",&duree_pret);
    
    if(score_credit <= 1000)
    {
        
    if(revenu_annuel >= 30000 && score_credit >= 700 && duree_pret <= 10 )
    {
        printf("Eligible");
    }
    else if(revenu_annuel >= 30000 && score_credit >= 650 && duree_pret <= 15)
    {
        printf("Eligible avec conditions");
    }
    else{
        printf("Non Eligible");
    }
    }
    else
    {
        printf("Error.. le score de credit est plafone en 1000");
    }


    return 0;
}