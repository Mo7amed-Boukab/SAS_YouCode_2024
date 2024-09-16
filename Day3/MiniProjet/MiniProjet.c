#include <stdio.h>
#include <string.h>

#define max 100
char Titres[max][50];
char Descriptions[max][200];
char Dates[max][11];
int index = 0;

void Ajouter_Tache(char titre[50], char description[200], char date[11]) {
    if (index < max) {
        strcpy(Titres[index], titre);
        strcpy(Descriptions[index], description);
        strcpy(Dates[index], date);
        printf("La Tache '%s' ajoutee avec succes\n", Titres[index]);
        index++;
    } else {
        printf("La liste est pleine!\n");
    }
}               
void Supprimer_Tache(char titre[50]) {
    int index_recherche = 0;
    int trouver = 0;
    while (index_recherche < index) {
        if (strcmp(Titres[index_recherche], titre) == 0) {
            trouver = 1;
            break;
        }
        index_recherche++;
    }
    if (trouver == 0) {
        printf("Cette tache n'a pas ete trouvee\n");
        return;
    } else {
        for (int i = index_recherche; i < index - 1; i++) {
            strcpy(Titres[i], Titres[i + 1]);
            strcpy(Descriptions[i], Descriptions[i + 1]);
            strcpy(Dates[i], Dates[i + 1]);
        }
        index--;
        printf("Tache '%s' est supprimee\n", titre);
    }
}
void Recherche_Tache(char titre[50]) {
    int tache = 0;
    int trouver = 0;
    while (tache < index) {
        if (strcmp(Titres[tache], titre) == 0) {
            trouver = 1;
            break;
        }
        tache++;
    }
    if (trouver == 0) {
        printf("Cette tache n'a pas ete trouvee\n");
    } else {
        printf("Cette tache est trouvee dans la liste\n");
    }
}
void Affiche_Tache() {
    for (int i = 0 ; i < index ; i++) {
        printf("Tache : %s\nDescription : %s\nDate : %s\n", Titres[i], Descriptions[i], Dates[i]);
    }
}
int main()
{
    int choix;
    char tache[50], description[200], date[11], x; 
    printf("*** Systeme de Gestion de Taches ***\n\n");
    while (1) {
        printf("Tapez (1) pour Ajouter une Tache\n");
        printf("Tapez (2) pour Rechercher une Tache\n");
        printf("Tapez (3) pour Supprimer une Tache\n");
        printf("Tapez (4) pour Afficher les Taches\n");
        printf("Tapez (5) pour Quitter\n");
        scanf("%d", &choix);  
        switch (choix) {
        case 1:  
               printf("Entrez la Tache >>>\n");
               scanf("%s",&tache);
               printf("Entrez la Description >>>\n");
               scanf("%s",&description);
               printf("Entrez la Date >>>\n");
               scanf("%s",&date);
               Ajouter_Tache(tache, description, date);
               break;
        case 2:
               printf("Entrer la Tache a rechercher >>>\n");
               scanf("%s",&tache);
               Recherche_Tache(tache);
               break;             
        case 3:
               printf("Entrez la Tache a supprimer >>>\n");
               scanf("%s",&tache);
               Supprimer_Tache(tache);
               break;
        case 4:
               Affiche_Tache();
               break;
        case 5:
               printf("Au revoir!\n");
               return 0;
        default:
               printf("Choix invalide.\n");
               break;
        }
        printf("Voulez vous retourner au Menu Principal [Y ou N] >>>\n");
        scanf(" %c", &x);
        if (x != 'Y' && x != 'y') {
            printf("Au revoir!\n");
            break;
        }
    }
    return 0;
}
