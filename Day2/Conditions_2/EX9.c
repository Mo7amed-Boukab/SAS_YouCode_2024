/*Écrivez un programme C pour calculer le salaire d'un employé en fonction de :

Salaire de base (en euros)
Nombre d'heures supplémentaires
Type de poste (1 pour junior, 2 pour senior)
Les règles de calcul sont :

Heures supplémentaires : 1,5 fois le taux horaire
Prime pour poste senior : 20% du salaire de base
Prime pour poste junior : 10% du salaire de base
*/

#include <stdio.h>

int main()
{
    float salaire_base , prime , salaire_total ;
    float prix_horaire;
    int nbr_heure_supplementaire , type_poste ;
    printf("\n*** Calcul du Salaire avec Primes ***\n\n");
    printf("Entrez votre salaire de base >> ");
    scanf("%f",&salaire_base);
    printf("Entrez le nombres des heures supplementaires >> ");
    scanf("%d",&nbr_heure_supplementaire);
    printf("Choisi le type de votre poste\nTapez (1) pour junior\nTapez (2) pour senior\n>> ");
    scanf("%d",&type_poste);
    
    if(type_poste == 1)
    {
        prime = salaire_base * 0.1;
    }
    else
    {
        prime = salaire_base * 0.2;
    }
    prix_horaire = salaire_base / 176;    // 176 heure de travail par mois    
    salaire_total = salaire_base + prime + (nbr_heure_supplementaire * prix_horaire * 1.5) ;
    printf("Salaire Totale >>> %.2f ",salaire_total);
    return 0;
}