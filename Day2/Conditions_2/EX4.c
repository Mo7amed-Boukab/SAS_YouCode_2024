/*Écrivez un programme C pour évaluer la performance d'un employé en fonction de :

Score de performance (de 0 à 100)
Ancienneté (en années)
Récompenses reçues (0 pour aucune, 1 pour une, 2 pour deux ou plus)
Les évaluations sont :

Score >= 90 et Ancienneté >= 5 ans : Excellente
Score >= 75 et Ancienneté >= 3 ans : Bonne
Score >= 50 et Ancienneté < 3 ans : Satisfaisante
Score < 50 : Insuffisante
Ajoutez un bonus si des récompenses ont été reçues : 10% pour une récompense, 20% pour deux ou plus.
*/
#include <stdio.h>

int main()
{
    int score , anciennete , recompenses_recues;
    printf("\n*** Evaluation de Performance d'Employe ***\n\n");
    printf("Entrez le score de vos performance >> ");
    scanf("%d",&score);
    printf("Quel est le nombre d'annee d'anciennete que vous avez >> ");
    scanf("%d",&anciennete);
    printf("Est ce que vous avez recu une recompenses ?\nTapez (0) pour aucune\nTapez (1) pour une\nTapez (2) pour deux ou plus\n>> ");
    scanf("%d",&recompenses_recues);
    if(recompenses_recues == 1)
    {
        score = score + (score * 0.1);
    }
    else if(recompenses_recues >= 2)
    {
        score = score + (score * 0.2);
    }
    else 
    {
        score = score;
    }

    if( score >= 90 && anciennete >= 5 )
    {
        printf("Excellente");
    }
    else if( score >= 75 && anciennete >= 3 )
    {
        printf("Bonne");
    }
    else if( score >= 50 && anciennete < 3 )
    {
        printf("Satisfaisante");
    }
    else{
        printf("Insuffisante");
    }

    return 0;
}