/*Écrivez un programme C pour planifier un voyage en fonction de :

Budget (en euros)
Destination (1 pour plage, 2 pour montagne, 3 pour ville)
Nombre de personnes
Les recommandations sont :

Budget >= 1000 € : Voyage haut de gamme
Budget entre 500 € et 1000 € : Voyage moyen
Budget < 500 € : Voyage économique
Les destinations recommandées sont :

Plage pour un budget >= 1000 € et > 2 personnes
Montagne pour un budget >= 500 € et <= 2 personnes
Ville pour tout budget et nombre de personnes
*/
#include <stdio.h>
int main ()
{
    float budget;
    int personnes;
    printf("\n*** Planification de Voyage ***\n\n");
    printf("Entrez le budget pour la voyage >> ");
    scanf("%f",&budget);
    printf("Entrez le nombre de personnes >> ");
    scanf("%d",&personnes);

    if( budget >= 1000 && personnes > 2)
    {
        printf("Voyage haut de gamme a la Plage ou a la Ville");
    }
    else if( budget >= 1000 && personnes <=2 )
    {
        printf("Voyage haut de gamme a la Montagne ou a la Ville");
    }
    else if( budget >= 500 && personnes <= 2)
    {
        printf("Voyage moyen a la Montagne ou a la Ville");
    }
    else if( budget >= 500 && personnes > 2)
    {
        printf("Voyage moyen a la Ville");
    }
    else
    {
        printf("Voyage economique a la Ville");
    }

    return 0;
}