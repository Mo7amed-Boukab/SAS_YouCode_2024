/*Écrivez un programme C pour calculer les impôts à payer en fonction de :

Revenu annuel (en euros)
Statut fiscal (1 pour célibataire, 2 pour marié, 3 pour chef de famille)
Déductions (en euros)
Les tranches d'imposition sont :

Revenu <= 20 000 € : 5%
Revenu > 20 000 € et <= 50 000 € : 10%
Revenu > 50 000 € : 20%
Les déductions sont :

Célibataire : Déduction de 1 000 €
Marié : Déduction de 2 000 €
Chef de famille : Déduction de 3 000 €
*/

#include <stdio.h>

int main()
{
    float revenu_annuel ,impot_payer;
    int statut_fiscal;
    printf("\n*** Calcul des Impots ***\n\n");
    printf("Entrez votre revenu annuel >> ");
    scanf("%f",&revenu_annuel);
    printf("Entrez votre statut fiscal\nTapez (1) pour celibataire\nTapez (2) pour marie\nTapez (3) pour chef de famille\n>> ");
    scanf("%d",&statut_fiscal);

    if(revenu_annuel <= 20000)
    {
      impot_payer = revenu_annuel * 0.05;
    }
    else if(revenu_annuel > 50000)
    {
        impot_payer = revenu_annuel * 0.2;
    }
    else
    {
        impot_payer = revenu_annuel * 0.1;
    }

    if(statut_fiscal == 1)
    {
        if(impot_payer <= 1000)
        {
           impot_payer = 0;
        }
        else
        { 
            impot_payer = impot_payer - 1000;
        }
       
    }
    else if(statut_fiscal == 2)
    {
        if(impot_payer <= 2000)
        {
           impot_payer = 0;
        }
        else
        { 
            impot_payer = impot_payer - 2000;
        }  
    }
    else 
    {
        if(impot_payer <= 3000)
        {
           impot_payer = 0;
        }
        else
        { 
            impot_payer = impot_payer - 3000;
        } 
    }
    printf("L'impot a payer >>> %.2f DH",impot_payer);
   
    return 0;
}