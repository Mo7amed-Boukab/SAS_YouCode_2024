/*Écrivez un programme C qui affiche les jours de la semaine à l'utilisateur et lui demande de choisir un jour.
 Le programme doit afficher le jour sélectionné et les jours qui le suivent dans la semaine.
 Assurez-vous de gérer les jours de la semaine correctement (lundi, mardi, etc.)*/

#include <stdio.h>

int main()
{
    char *jours[] = {"lundi" ,"mardi" ,"mercredi" ,"jeudi" ,"vendredi" ,"samedi" ,"dimanche"};
    int  choix;
    printf("\n*** Selection de Sortie ***\n\n");
    do
    { 
        printf("Choisi le jour de la semaine a commencer\n(1) lundi\n(2) mardi\n(3) merdredi\n(4) jeudi\n(5) vendredi\n(6) samedi\n(7) dimanche\n>>> ");
        scanf("%d",&choix);

    }while(choix < 1 || choix > 7);
   
    int i = choix - 1 , cpt = 0;
    while( cpt != 7 )
    {
        printf("%s  ",jours[i]);
        i++;
        if (i == 7) i = 0 ;
        cpt++;
    }
      
    
    return 0; 
}