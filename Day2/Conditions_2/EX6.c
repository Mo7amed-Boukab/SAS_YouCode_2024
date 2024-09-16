/*Écrivez un programme C pour calculer la facture d'électricité en fonction de :

Consommation d'électricité (en kWh)
Type d'utilisateur (1 pour résidentiel, 2 pour commercial)
Type de contrat (0 pour standard, 1 pour réduit)
Les tarifs sont :

Résidentiel : 0,20 €/kWh pour contrat standard, 0,15 €/kWh pour contrat réduit
Commercial : 0,30 €/kWh pour contrat standard, 0,25 €/kWh pour contrat réduit
Ajoutez un supplément de 10% si la consommation dépasse 500 kWh.
*/
#include <stdio.h>

int main()
{
    int utilistion , type_contrat , consommation , frais = 1 ;
    
    printf("\n*** Calcul de la Facture d'Electricite ***\n\n");
    printf("Entrez le type d'etilisation de l'electricite\nTapez (1) pour residentiel\nTapez (2) pour commercial\n>> ");
    scanf("%d",&utilistion);
    printf("Entrez le type de contrat\nTapez (0) pour une contrat standard\nTapez (1) pour une contrat reduit\n>> ");
    scanf("%d",&type_contrat);
    printf("Entrez votre consommation d'electricite en kWh ");
    scanf("%d",&consommation);

    if(consommation > 500)
    {
        frais = frais + frais * 0.1;
    }
    else 
    {
        frais = frais;
    }

    if(utilistion == 1 && type_contrat == 0)
    {
       frais = frais * 0.2 * consommation ;
       printf("Frais a payer >>> %d DH",frais);
    }
    else if(utilistion == 1 && type_contrat == 1)
    {
       frais = frais * 0.15 * consommation ;
       printf("Frais a payer >>> %d DH",frais);
    }
    else if(utilistion == 2 && type_contrat == 0)
    {  
        frais = frais * 0.3 * consommation ;
        printf("Frais a payer >>> %d DH",frais);
    }
    else if(utilistion == 2 && type_contrat == 1)
    {
        frais = frais * 0.25 * consommation ;
        printf("Frais a payer >>> %d DH",frais);
    }
    else
    {
        printf("Error .. ");
    }
    
    return 0;
}