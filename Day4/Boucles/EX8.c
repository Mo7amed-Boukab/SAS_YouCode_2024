#include <stdio.h>

int main()
{
    int num ;
    int trouver = 0;
    int T[] = {2,5,8,9,10,15,17,19,21,25,29,30,35};
    int gauche = 0 , droite = 12 ,milieu;

    printf("\n*** Recherche Dichotomique ***\n\n");
    printf("Entrez le nombre a verifier >>> ");
    scanf("%d",&num);
    
    while(gauche <= droite)
    {    
        milieu = gauche + (droite - gauche) / 2; 
        if (T[milieu] == num)
        {
            trouver = 1;
            break;
        }
        else if(T[milieu] > num)
        {
            droite = milieu - 1 ;
        }
        else
        {
            gauche = milieu + 1;
        }

    }
    if( trouver == 1)
    {
        printf("Le nombre est trouvee");
    }
    else
    {
        printf("Le nombre n'est existe pas");
    }
      
    return 0;
}