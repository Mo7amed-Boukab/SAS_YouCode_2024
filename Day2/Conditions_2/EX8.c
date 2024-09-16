/*Écrivez un programme C pour déterminer le plan de santé en fonction de :

Historique médical (0 pour aucun problème, 1 pour problème mineur, 2 pour problème majeur)
Type de couverture (1 pour de base, 2 pour étendue)
Les options de plan sont :

 Age < 30 ans : Plan de base
 Age >= 30 ans et Historique médical = 0 : Plan de base
 Age >= 30 ans et Historique médical >= 1 : Plan étendu
Ajoutez une couverture supplémentaire pour les problèmes majeurs.
*/

#include <stdio.h>

int main()
{
    int age , historique_medical;
    printf("\n*** Plan de Sante ***\n\n");
    printf("Entrez votrez age >> ");
    scanf("%d",&age);
    printf("Determiner votre historique medical\nTaper (0) pour aucun probleme\nTapez (1) pour probleme mineur\nTapez (2) pour probleme majeur\n>> ");
    scanf("%d",&historique_medical);

    if(age >= 30 && historique_medical == 0)
    {
        printf("Type de couverture >>> Plan de base");
    }
    else if(age >= 30 && historique_medical >= 1)
    {
        printf("Type de couverture >>> Plan etendu");
    }
    else 
    {
        printf("Type de couverture >>> Plan de base");
    }
    return 0;
}