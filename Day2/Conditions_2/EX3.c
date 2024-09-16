/*Écrivez un programme C pour déterminer les jours de congé restant en fonction de :

Nombre total de jours de congés accordés
Nombre de jours de congés utilisés
Statut de l'employé (0 pour temps partiel, 1 pour temps plein)
Les règles de gestion sont :

Temps plein : Jours restants = Jours accordés - Jours utilisés
Temps partiel : Jours restants = (Jours accordés / 2) - Jours utilisés
Si les jours utilisés dépassent les jours accordés, affichez un message d'alerte.
*/

#include <stdio.h>


int main()
{
    int jours_conge = 30 , jours_utilises , jours_restants;
    int statut_employe;

    printf("\n*** Gestion des Conges ***\n\n");
    printf("Entrez le nombre de jour de conge que vous utilise >> ");
    scanf("%d",&jours_utilises);
    printf("Entrez le type de votre travaille\n");
    printf("Tapez (0) pour  temps partiel\nTapez (1) pour temps plein\n");
    scanf("%d",&statut_employe);

    if (jours_utilises > jours_conge)
    {
        printf("Attention! Vous etes depasse le nombre de jour de conge");
    }
    else {
        switch (statut_employe)
    {
    case 0:
         jours_restants = (jours_conge / 2) - jours_utilises;  
        
        break;
    case 1:
         jours_restants = jours_conge - jours_utilises; 
        break;
    
    default:
         printf("Error.. Tapez 0 ou 1");
        break;
    }
    if(jours_restants > 0)
        printf("Le nombre des jours de conge restants >>> %d jour",jours_restants);
    else
        printf("Attention! Vous etes depasse le nombre de jour de conge");    
    }
    
   
    


    
    return 0;
}