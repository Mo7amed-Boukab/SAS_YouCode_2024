/*Écrivez un programme C pour calculer la prime d'assurance d'une voiture en fonction de :

age du conducteur (en années)
Type de voiture (1 pour sportive, 2 pour utilitaire, 3 pour familiale)
Nombre d'accidents au cours des 5 dernières années
Les règles de calcul sont :

Conducteur de moins de 25 ans : Prime de base * 1.5
Conducteur de 25 à 65 ans : Prime de base
Conducteur de plus de 65 ans : Prime de base * 1.2
Type de voiture sportive : Prime * 2
Type de voiture utilitaire : Prime * 1.2
Type de voiture familiale : Prime * 1.1
Nombre d'accidents > 1 : Ajoutez 30% à la prime
*/

#include <stdio.h>

int main()
{
    int age_conducteur , type_voiture , nbr_accidents;
    float prime_assurance;
    float prime_de_base = 1000;
    printf("\n*** Calcul de Prime d'Assurance Auto ***\n\n");

    printf("Entrez votre age >> ");
    scanf("%d",&age_conducteur);
    printf("Choisi le type de votre voiture\n\nTaper (1) pour sportive\nTaper (2) pour utilitaire\nTaper (3) pour familiale\n\n>> ");
    scanf("%d",&type_voiture);
    printf("Quel est le nombre d'accidents que vous faites au cours de 5 dernieres annees >> ");
    scanf("%d",&nbr_accidents);
    
    if (age_conducteur < 25 )
    {
      prime_de_base = prime_de_base * 1.5;
    }
    else if(age_conducteur >= 25 && age_conducteur <= 65)
    {
      prime_de_base = prime_de_base ;
    }
    else{
      prime_de_base = prime_de_base * 1.2;
    }
    switch (type_voiture)
    {
    case 1:
        prime_de_base = prime_de_base * 2;
        break;
    case 2:
        prime_de_base = prime_de_base * 1.2;
        break;
    case 3:
        prime_de_base = prime_de_base * 1.1;
        break;
    
    default:
        printf("Error.. choisi entre 1 et 3");
        break;
    }
    if(nbr_accidents > 1 )
     {
        prime_de_base = prime_de_base + prime_de_base * 0.3;
     }
    printf("Le montant de prime de votre assurance >>> %.2f", prime_de_base) ;
    return 0;
}