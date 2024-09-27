#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define max 100
#define max_reclamation 200


typedef struct {
    char identifiant[30];
    char password[30];
    char roles[30];
} Users;

Users U[max];  
int cpt_utilisateurs = 0;  

typedef struct {
    char Id[9]; 
    char Motif[50];
    char Description[200];
    char Categorie[30];
    char Status[20];
    char Date[11];
    char Identifiant[30];
    char Priorite[20];
    int heure_rec;   
} Reclamation;

Reclamation Tableau_rec[max_reclamation];
int cpt_reclamation = 0;
int cpt_resolu = 0 ;
int diff = 0;

void Sign_Up();
void Sign_In();
int Verifier_Password(char Password_verifier[], char identifiant_verifier[]);
void Administrateur(int user_index);
void Agent_Reclamation(int user_index);
void Client(int user_index);
void Gerer_Roles();
void Ajoute_Reclamation(int user_index);
void Afficher_Reclamations();
void Afficher_Reclamations_Tri();
void Rechercher_Reclamation();
void Modifier_Reclamation(int user_index, char user_role[]);
void Supprimer_Reclamation(int user_index, char user_role[]);
void Traiter_Reclamation(int user_index);
void Afficher_Statistiques(int user_index);

//-------------------------------------  Menu Administrateur  -------------------------------------
void Administrateur(int user_index) {
    int choix;  
    do{
        printf("\n--------------------------- Bienvenue %s (Administrateur) ----------------------------\n", U[user_index].identifiant);
        printf("------------------------------------------------------------------------------------------\n\n");
        printf("\t1. Gerer les roles \n");
        printf("\t2. Ajouter une reclamation\n");
        printf("\t3. Rechercher une reclamation\n");
        printf("\t4. Traiter une reclamation\n");
        printf("\t5. Modifier une reclamation\n");
        printf("\t6. Supprimer une reclamation\n");
        printf("\t7. Afficher les reclamations ordonnees par priorite\n");
        printf("\t8. Afficher les statistiques\n");
        printf("\t9. Quitter\n");
        printf("\t>>> ");
        scanf("%d", &choix);
    
        switch (choix)
        {
            case 1 :
                Gerer_Roles(); 
                break;
            case 2 :
                Ajoute_Reclamation(user_index);
                break;
            case 3 :
                Rechercher_Reclamation(); 
                break;
            case 4 :
                Traiter_Reclamation(user_index); 
                break;
            case 5 :
                Modifier_Reclamation(user_index,U[user_index].roles);
                break;
            case 6:   
                Supprimer_Reclamation(user_index,U[user_index].roles);
                break;
            case 7 :  
                Afficher_Reclamations_Tri();
                break;
            case 8 :
                Afficher_Statistiques(user_index); 
                break;
            case 9 :
                printf("Retour au menu principal.\n");
                break;
            default:
                printf("Choix invalide.\n");
        }
    } while (choix != 9);
}
//-----------------------------------------  Menu Client  -----------------------------------------
void Client(int user_index) {

    int choix;
    do{
        printf("\n----------------------- Bienvenue %s (Client) --------------------------\n", U[user_index].identifiant);
        printf("----------------------------------------------------------------------------\n\n");
        printf("\t1. Ajouter une reclamation\n");
        printf("\t2. Modifier une reclamation\n");
        printf("\t3. Supprimer une reclamation\n");
        printf("\t4. Quitter\n");
        printf("\t>>> ");
        scanf("%d", &choix);

        switch (choix)
        {
            case 1:
                Ajoute_Reclamation(user_index);
                break;
            case 2:
                Modifier_Reclamation(user_index,U[user_index].roles);
                break;
            case 3:
                Supprimer_Reclamation(user_index,U[user_index].roles);
                break;
            case 4:
                printf("Retour au menu principal.\n");
                break;
            default:
                printf("Choix invalide.\n");
        }
    } while (choix != 4);
}
//-----------------------------------  Menu Agent de Reclamation  ---------------------------------
void Agent_Reclamation(int user_index) {
    int choix;
    do {
        printf("\n\n--------------------- Bienvenu %s (Agent de Reclamation) ------------------------\n",U[user_index].identifiant);
        printf("---------------------------------------------------------------------------------------\n\n");
        printf("\t1. Afficher toutes les reclamations\n");
        printf("\t2. Modifier une reclamation\n");
        printf("\t3. Supprimer une reclamation\n");
        printf("\t4. Traiter une reclamation\n");
        printf("\t5. Rechercher une reclamation\n");
        printf("\t6. Quitter\n");
        printf("\t>>>");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                Afficher_Reclamations();
                break;
            case 2:
                Modifier_Reclamation(user_index,U[user_index].roles);
                break;
            case 3:
                Supprimer_Reclamation(user_index,U[user_index].roles);
                break;
            case 4:
                Traiter_Reclamation(user_index); 
                break;
            case 5:
                Rechercher_Reclamation(); 
                break;
            case 6:
                printf("\nRetour au menu principal.\n");
                break;
            default:
                printf("\nChoix invalide.\n");
        }
    } while (choix != 6);
}
//-------------------------------------------------------------------------------------------------

int Verifier_Password(char Password_verifier[], char identifiant_verifier[]) {

    int longueur = strlen(Password_verifier);
    int majuscule = 0, minuscule = 0, chiffre = 0, caractere_special = 0;

    if (longueur < 8) {
        printf("\nLe password doit avoir au moins 8 caracteres.\n");
        return 0;
    }

    if (strstr(Password_verifier, identifiant_verifier) != NULL) {
        printf("Le Password ne doit pas contenir le nom d'utilisateur.\n");
        return 0;
    }

    for (int i = 0; i < longueur; i++) {
        if (isupper(Password_verifier[i])) majuscule = 1;
        else if (islower(Password_verifier[i])) minuscule = 1;
        else if (isdigit(Password_verifier[i])) chiffre = 1;
        else if (strchr(".!@#$%^&*", Password_verifier[i])) caractere_special = 1;
    }

    if (majuscule == 0  || minuscule == 0 || chiffre == 0 || caractere_special == 0 ) {
        printf("\nLe Password doit contenir au moins :\nune lettre majuscule\nune lettre minuscule\nun chiffre\nun caractere special (par exemple : !@#$%^&*)\n");
        return 0;
    }
    return 1;  
}

void Sign_Up() {
    
    char password_temp[50];
    if (cpt_utilisateurs < max) {
        printf("\n---------------------------- Creer un compte --------------------------------\n");
        printf("------------------------------------------------------------------------------\n\n");

        printf("Entrez votre Identifiant : ");
        scanf("%s", U[cpt_utilisateurs].identifiant);

        printf("Entrez le mode de passe : ");
        scanf("%s", password_temp);

        if ( Verifier_Password( password_temp , U[cpt_utilisateurs].identifiant ) == 0 ) {
            return;
        }
        else{
            strcpy( U[cpt_utilisateurs].password , password_temp );
        }

        if (cpt_utilisateurs == 0) {
            strcpy(U[cpt_utilisateurs].roles, "administrateur");
            printf("\nCompte cree avec succes. Vous etes l'administrateur.\n");

        }
        else if( cpt_utilisateurs == 1){
            strcpy(U[cpt_utilisateurs].roles, "agent");
            printf("\nCompte cree avec succes. Vous etes un agent de reclamation.\n");
        }
        else {
            strcpy(U[cpt_utilisateurs].roles, "client");
            printf("\nCompte cree avec succes. Vous etes un client.\n");
        } 
        cpt_utilisateurs++;

    } 
    else {  
        printf("\nNombre maximum d'utilisateurs atteint.\n");
        return;
    }
}

void Sign_In() {

 while(1)
{
    char Identifiant_connecter[50];
    char Password_connecter[50];
    int  max_tentative = 0;
    int trouver = 0;

    printf("\n------------------------------- Se connecter ----------------------------------\n");
    printf("--------------------------------------------------------------------------------\n\n");
   
    while( max_tentative < 3)    
    {
        printf("Entrez votre Identifiant : ");
        scanf("%s", Identifiant_connecter);
        
        printf("Entrez le mode de passe : ");
        scanf("%s", Password_connecter);

    
        for (int i = 0; i < cpt_utilisateurs; i++)
        {
            if( strcmp(Identifiant_connecter, U[i].identifiant) == 0 )
            {
                trouver = 1;
                if (strcmp(Password_connecter, U[i].password) == 0)   
                {
                    printf("\nConnexion reussie.\n");

                    if(strcmp(U[i].roles, "administrateur") == 0) {
                        Administrateur(i);  
                    }
                    else if(strcmp(U[i].roles, "agent") == 0){
                        Agent_Reclamation(i);
                    }
                    else {
                        Client(i); 
                    }
                    return; 
                }
                else
                {
                    max_tentative++;
                    printf("\nMot de passe est incorrect.\n");
                    printf("Essaye echouee %d/3\n", max_tentative);
                    }   
                    break;                       
                }
            }
    
            if (trouver == 0) 
            {
                max_tentative++; 
                printf("\nIdentifiant est incorrect.\n");
                printf("Tentative %d/3\n", max_tentative);
            }    
    }
     if (max_tentative >= 3) 
            {
                printf("\nVotre compte est verrouille apres 3 tentatives echouee.\n");
                return;
            } 
    } 
      

}

void Ajoute_Reclamation(int user_index) { 

    char status[] = "en attente"; 
    strcpy(Tableau_rec[cpt_reclamation].Status, status);

//-------------------------------------  Generateur de ID  ------------------------------------

    char Id_Generetor[11];  
    char Lettres[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char Nombres[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    
    srand(time(0));

    int index_lettre = rand() % (sizeof(Lettres) / sizeof(Lettres[0]));
    Id_Generetor[0] = Lettres[index_lettre];

    for (int i = 1; i < 8; i++) {
        int index_nombre = rand() % 10;
        Id_Generetor[i] = Nombres[index_nombre];
    }
    Id_Generetor[8] = '\0';

    strcpy(Tableau_rec[cpt_reclamation].Id, Id_Generetor); 

// ------------------------- Generateur de la date actuelle -------------------------------------

    time_t t = time(NULL);
    struct tm *date = localtime(&t);
    strftime(Tableau_rec[cpt_reclamation].Date, sizeof(Tableau_rec[cpt_reclamation].Date), "%d-%m-%Y", date);


    printf("\n---------------------------- Ajoute une reclamation -----------------------------\n");
    printf("----------------------------------------------------------------------------------\n\n");
    
    printf("Date : %s\n", Tableau_rec[cpt_reclamation].Date);
    printf("ID : %s\n", Tableau_rec[cpt_reclamation].Id); 

    printf("\nMotif de reclamation : ");
    scanf(" %[^\n]", Tableau_rec[cpt_reclamation].Motif);  
    printf("\nDescription : ");
    scanf(" %[^\n]", Tableau_rec[cpt_reclamation].Description);    
    printf("\nCategorie : ");
    scanf(" %[^\n]", Tableau_rec[cpt_reclamation].Categorie);

    int trouver = 0;
    char *haute_priorite[] = {"urgent", "important", "immediat"};
    char *moyenne_priorite[] = {"normal", "regulier", "standard"};

    for (int i = 0 ; i < 3 ; i++) 
    {
        if (strstr(Tableau_rec[cpt_reclamation].Description, haute_priorite[i]) != NULL) 
        {
            trouver = 1;
            strcpy(Tableau_rec[cpt_reclamation].Priorite, "haute");
        }
        break;
    }
    for (int i = 0 ; i < 3 ; i++) 
    {    
       if (strstr(Tableau_rec[cpt_reclamation].Description, moyenne_priorite[i]) != NULL)
        {
            trouver = 1;
            strcpy(Tableau_rec[cpt_reclamation].Priorite, "moyenne");
        }
        break;
    }    
    if( trouver == 0)
    {
        {  
            strcpy(Tableau_rec[cpt_reclamation].Priorite, "basse");
        }
    }

    strcpy(Tableau_rec[cpt_reclamation].Identifiant, U[user_index].identifiant);
             
    Tableau_rec[cpt_reclamation].heure_rec  = (int) time(NULL);    

    cpt_reclamation++; 
}

void Afficher_Reclamations_Tri(){

    printf("\n-----------------  Reclamations (Priorite Haute)  ---------------------\n");

    for (int i = 0; i < cpt_reclamation; i++) 
    {
        if (strcmp(Tableau_rec[i].Priorite, "haute") == 0)
        {
            printf("\t\t\tReclamation %d \n\n", i + 1);
            printf(" ID : %s\n", Tableau_rec[i].Id);
            printf(" Motif : %s\n",Tableau_rec[i].Motif);
            printf(" Description : %s\n", Tableau_rec[i].Description);
            printf(" Categorie : %s\n", Tableau_rec[i].Categorie);
            printf(" Statut : %s\n", Tableau_rec[i].Status);
            printf(" Date de soumission : %s\n", Tableau_rec[i].Date);
            printf(" Ajoutee par : %s\n", Tableau_rec[i].Identifiant);
        }
    }

    printf("\n-----------------  Reclamations (Priorite Moyenne) ---------------------\n");

    for (int i = 0; i < cpt_reclamation; i++) 
    {
        if (strcmp(Tableau_rec[i].Priorite, "moyenne") == 0) 
        {
            printf("\t\t\tReclamation %d \n\n", i + 1);
            printf(" ID : %s\n",Tableau_rec[i].Id);
            printf(" Motif : %s\n", Tableau_rec[i].Motif);
            printf(" Description : %s\n", Tableau_rec[i].Description);
            printf(" Categorie : %s\n", Tableau_rec[i].Categorie);
            printf(" Statut : %s\n", Tableau_rec[i].Status);
            printf(" Date de soumission : %s\n", Tableau_rec[i].Date);
            printf(" Ajoutee par : %s\n", Tableau_rec[i].Identifiant);
        }
    }

    printf("\n------------------  Reclamations (Priorite Basse) ---------------------\n");

    for (int i = 0; i < cpt_reclamation; i++) 
    {
        if (strcmp(Tableau_rec[i].Priorite, "basse") == 0) 
        {
            printf("\t\t\tReclamation %d \n\n", i + 1);
            printf(" ID : %s\n", Tableau_rec[i].Id);
            printf(" Motif : %s\n", Tableau_rec[i].Motif);
            printf(" Description : %s\n", Tableau_rec[i].Description);
            printf(" Categorie : %s\n", Tableau_rec[i].Categorie);
            printf(" Statut : %s\n", Tableau_rec[i].Status);
            printf(" Date de soumission : %s\n", Tableau_rec[i].Date);
            printf(" Ajoutee par : %s\n", Tableau_rec[i].Identifiant);
        }
    }
}

void Afficher_Reclamations() {


    int trouver = 0;
    printf("\n------------------------ Liste des reclamations -------------------------\n");
    printf("-------------------------------------------------------------------------\n\n");
    for (int i = 0; i < cpt_reclamation; i++) {
    
            trouver = 1;
            printf("------------------------------------------------------------------------\n");
            printf("\t\t\tReclamation %d \n\n", i + 1);
            printf(" ID : %s\n", Tableau_rec[i].Id);
            printf(" Motif : %s\n", Tableau_rec[i].Motif);
            printf(" Description : %s\n", Tableau_rec[i].Description);
            printf(" Categorie : %s\n", Tableau_rec[i].Categorie);
            printf(" Statut : %s\n", Tableau_rec[i].Status);
            printf(" Date de soumission : %s\n", Tableau_rec[i].Date);
            printf(" Ajoutee par : %s\n", Tableau_rec[i].Identifiant);
    
    
        
    }
    if(trouver == 0)
    {   
        printf("\nAucun Reclamation trouvee.\n");       
    }
}


void Modifier_Reclamation(int user_index, char user_role[]){

    char id_rec[11];
    int index_rec = -1;

    printf("\n--------------------- Modifier une reclamations ------------------------\n");
    printf("-------------------------------------------------------------------------\n\n");

    printf("\nEntrer Id de reclamation a modifier : ");
    scanf("%s", id_rec);      

    for (int i = 0; i < cpt_reclamation; i++)
    {
        if ( strcmp(Tableau_rec[i].Id , id_rec ) == 0 ) 
        {
            index_rec = i;        
            break;
        }
    }

    if (index_rec == -1) { 
        printf("\nCette reclamation n'a pas trouvee.\n");
        return;
    }

    if (strcmp(user_role , "client") == 0) 
    {    
        if (strcmp(Tableau_rec[index_rec].Identifiant, U[user_index].identifiant) != 0)
        {
            printf("\nVous ne pouvez modifier que votre reclamation.\n");
            return;
        }
        if (strcmp(Tableau_rec[index_rec].Status, "resolu") == 0) 
        {
            printf("\nVous ne pouvez pas modifier cette reclamation par ce qu'il est deja traitee.\n");
            return;
        }
     
        int time_now = (int) time(NULL);

        if ( time_now - Tableau_rec[index_rec].heure_rec > 86400 ) // --------------------------------------------
        {
            printf("\nVous ne pouvez pas modifier cette reclamation tant que vous avez depasse 24 heures.\n");
            return;
        }
            printf("\nVotre reclamation ne passe pas 24h, donc vous pouvez maintenant de le modifier.\n\n");

            int choix;

            printf("Choisissez ce que vous voulez modifier\n\n");
            printf("\t1. Motif\n");
            printf("\t2. Description\n");
            printf("\t>> ");
            scanf("%d", &choix);

            switch (choix) 
           {
                case 1:
                    printf("Entrer le nouveau motif : ");
                    scanf(" %[^\n]", Tableau_rec[index_rec].Motif);  
                    break;
                case 2:
                    printf("Entrer la nouvelle description : ");
                    scanf(" %[^\n]", Tableau_rec[index_rec].Description);  
                   break;
                case 3:
                    printf("Entrer le nouveau statut : ");
                    scanf(" %[^\n]", Tableau_rec[index_rec].Status);
                    break;
                default:
                    printf("\nChoix invalide.\n");
                    break;
           }
            printf("\nReclamation modifiee avec succes.\n");
    }
    if( strcmp(user_role , "administrateur") == 0 || strcmp(user_role , "agent") == 0 )
    {
           int choix;

            printf("Choisissez ce que vous voulez modifier\n\n");
            printf("\t1. Motif\n");
            printf("\t2. Description\n");
            printf("\t>> ");
            scanf("%d", &choix);

            switch (choix) 
           {
                case 1:
                    printf("Entrer le nouveau motif : ");
                    scanf(" %[^\n]", Tableau_rec[index_rec].Motif);  
                    break;
                case 2:
                    printf("Entrer la nouvelle description : ");
                    scanf(" %[^\n]", Tableau_rec[index_rec].Description);  
                   break;
                case 3:
                    printf("Entrer le nouveau statut : ");
                    scanf(" %[^\n]", Tableau_rec[index_rec].Status);
                    break;
                default:
                    printf("\nChoix invalide.\n");
                    break;
           }
            printf("\nReclamation modifiee avec succes.\n");
    }       
 
}   

void Supprimer_Reclamation(int user_index, char user_role[]){

    char id_rec[11];
    int index_rec = -1; 

    printf("\n------------------ Supprimer une reclamation ----------------------\n");
    printf("--------------------------------------------------------------------\n\n");

    printf("\nEntrer id de reclamation a supprimer : ");
    scanf("%s", id_rec);   

    for (int i = 0; i < cpt_reclamation; i++) 
    {
        if (strcmp(Tableau_rec[i].Id, id_rec) == 0) 
        { 
            index_rec = i; 
            break;
        }
    }

    if (index_rec == -1) 
    {
        printf("\nCette reclamation n'a pas trouvee.\n");
        return;
    }

    if (strcmp(user_role , "client") == 0) 
    { 
        if (strcmp(Tableau_rec[index_rec].Identifiant, U[user_index].identifiant) != 0) 
        {                                                                                       
            printf("\nVous ne pouvez supprimer que votre reclamation.\n");                     
            return;
        }
        else
        {
            int time_now = (int) time(NULL);
            if (time_now - Tableau_rec[index_rec].heure_rec > 86400 )
            {
                 printf("\nVous ne pouvez pas supprimer cette reclamation tant que vous avez depasse 24 heures.\n");
                 return;
            }    
            else 
            {
                for (int i = index_rec; i < cpt_reclamation - 1; i++)
                {
                    Tableau_rec[i] = Tableau_rec[i + 1];  
                }  
                cpt_reclamation--;  

                printf("\nReclamation supprimee avec succes.\n");
            }
            
        }
      
    } 

    if( strcmp(user_role , "administrateur") == 0 || strcmp(user_role , "agent") == 0 )
    {
        for (int i = index_rec; i < cpt_reclamation - 1; i++) {

            Tableau_rec[i] = Tableau_rec[i + 1];  
        }  
        cpt_reclamation--;  

        printf("\nReclamation supprimee avec succes.\n");
    }  
}

void Gerer_Roles(){
 
    char Identifiant[50];
    int index_user = -1;
    char new_role[50];

    printf("\n------------------  Gerer les utilisateurs  ---------------------\n");
    printf("------------------------------------------------------------------\n\n");

    printf("Entrer l'identifiant d'utilisateur : ");
    scanf("%s", Identifiant);

    for (int i = 0; i < cpt_utilisateurs; i++) {
        if (strcmp(U[i].identifiant , Identifiant) == 0) {
            index_user = i;
            break;
        }
    }

    if (index_user == -1) {
        printf("Ce utilisateur n'a pas trouve dans la base de donnee.\n");
        return;
    }
    else {
        printf("\n\nEntrer le nouveau role (admininistrateur / agent / client) : ");
        scanf("%s", new_role);

        if (strcmp(new_role, "admininistrateur") == 0 || strcmp(new_role, "agent") == 0 || strcmp(new_role, "client") == 0)
        {
                strcpy(U[index_user].roles, new_role);
                printf("\nLe role de l'utilisateur %s a modifie comme (%s)\n", U[index_user].identifiant, U[index_user].roles);
        } 
        else {
                printf("\nLe role entrer est incorrect.\n");
        }

     
    }
   
}

void Rechercher_Reclamation(){

    int choix;
    char rechercher[50]; 
    int rec_trouver = 0; 

    printf("\n---------------------  Chercher une Reclamation  ----------------------\n");
    printf("-----------------------------------------------------------------------\n\n");

    printf("\nChoisissez le critere de recherche :\n\n");
    printf("\t1. Par Id de reclamation\n");
    printf("\t2. Par Identifiant de client\n");
    printf("\t3. Par Date de soumission\n");
    printf("\t4. Par Statut (en attente, en cours, resolu)\n");
    printf("\t5. Par categorie de reclamation\n");
    printf("\t>> ");
    scanf("%d", &choix);

    switch (choix) {

        case 1:
            printf("\nEntrer Id de reclamation : ");
            scanf("%s", rechercher);

            for (int i = 0; i < cpt_reclamation; i++)
            {
                if (strcmp(Tableau_rec[i].Id, rechercher) == 0)
                {
                    printf("\nLa reclamation est trouvee\n");
                    printf("------------------------------------------------------------------------\n");
                    printf(" ID : %s\n", Tableau_rec[i].Id);
                    printf(" Motif : %s\n", Tableau_rec[i].Motif);
                    printf(" Description : %s\n", Tableau_rec[i].Description);
                    printf(" Categorie : %s\n", Tableau_rec[i].Categorie);
                    printf(" Statut : %s\n", Tableau_rec[i].Status);
                    printf(" Date de soumission : %s\n", Tableau_rec[i].Date);
                    printf(" Ajoutee par : %s\n", Tableau_rec[i].Identifiant);
              
                    rec_trouver = 1;
                }
            }
            break;

        case 2:
            printf("\nEntrer l'identifiant du client : ");
            scanf(" %[^\n]", rechercher);

            for (int i = 0; i < cpt_reclamation; i++)
            {
                if (strcmp(Tableau_rec[i].Identifiant, rechercher) == 0)
                {
                    printf("\nLa reclamation est trouvee\n");
                    printf("------------------------------------------------------------------------\n");
                    printf(" ID : %s\n", Tableau_rec[i].Id);
                    printf(" Motif : %s\n", Tableau_rec[i].Motif);
                    printf(" Description : %s\n", Tableau_rec[i].Description);
                    printf(" Categorie : %s\n", Tableau_rec[i].Categorie);
                    printf(" Statut : %s\n", Tableau_rec[i].Status);
                    printf(" Date de soumission : %s\n", Tableau_rec[i].Date);
                    printf(" Ajoutee par : %s\n", Tableau_rec[i].Identifiant);

                    rec_trouver = 1;
                }
            }
            break;

        case 3:
            printf("\nEntrer la date de soumission (JJ-MM-AAAA) : "); 
            scanf(" %[^\n]", rechercher);

            for (int i = 0; i < cpt_reclamation; i++)
            {
                if (strcmp(Tableau_rec[i].Date, rechercher) == 0)
                {
                    printf("\nLa reclamation est trouvee\n");
                    printf("------------------------------------------------------------------------\n");
                    printf(" ID : %s\n", Tableau_rec[i].Id);
                    printf(" Motif : %s\n", Tableau_rec[i].Motif);
                    printf(" Description : %s\n", Tableau_rec[i].Description);
                    printf(" Categorie : %s\n", Tableau_rec[i].Categorie);
                    printf(" Statut : %s\n", Tableau_rec[i].Status);
                    printf(" Date de soumission : %s\n", Tableau_rec[i].Date);
                    printf(" Ajoutee par : %s\n", Tableau_rec[i].Identifiant);

                    rec_trouver = 1;
                }
            }
            break;

        case 4:
            printf("\nEntrer le Statut (en attente, en cours, resolu) : ");
            scanf(" %[^\n]", rechercher);

            for (int i = 0; i < cpt_reclamation; i++)
            {
                if (strcmp(Tableau_rec[i].Status, rechercher) == 0)
                {
                    printf("\nLa reclamation est trouvee\n");
                    printf("------------------------------------------------------------------------\n");
                    printf(" ID : %s\n", Tableau_rec[i].Id);
                    printf(" Motif : %s\n", Tableau_rec[i].Motif);
                    printf(" Description : %s\n", Tableau_rec[i].Description);
                    printf(" Categorie : %s\n", Tableau_rec[i].Categorie);
                    printf(" Statut : %s\n", Tableau_rec[i].Status);
                    printf(" Date de soumission : %s\n", Tableau_rec[i].Date);
                    printf(" Ajoutee par : %s\n", Tableau_rec[i].Identifiant);

                    rec_trouver = 1;
                }
            }
            break;

        case 5:
            printf("\nEntrer la categorie de la reclamation : ");
            scanf(" %[^\n]", rechercher);

            for (int i = 0; i < cpt_reclamation; i++)
            {
                if (strcmp(Tableau_rec[i].Categorie, rechercher) == 0)
                {
                    printf("\nLa reclamation est trouvee\n");
                    printf("------------------------------------------------------------------------\n");
                    printf(" ID : %s\n", Tableau_rec[i].Id);
                    printf(" Motif : %s\n", Tableau_rec[i].Motif);
                    printf(" Description : %s\n", Tableau_rec[i].Description);
                    printf(" Categorie : %s\n", Tableau_rec[i].Categorie);
                    printf(" Statut : %s\n", Tableau_rec[i].Status);
                    printf(" Date de soumission : %s\n", Tableau_rec[i].Date);
                    printf(" Ajoutee par : %s\n", Tableau_rec[i].Identifiant);

                    rec_trouver = 1;
                }
            }
            break;

        default:
            printf("\nChoix invalide.\n");
            break;
    }

    if (rec_trouver == 0)
    {
        printf("\nAucune reclamation trouvee par ce critere.\n");
    }
}

void Traiter_Reclamation(int user_index){

    char id_rec[11];
    int index_rec = -1;
    printf("\n--------------------- Traiter une Reclamation -----------------------\n");
    printf("----------------------------------------------------------------------\n\n");
    
    printf("\nEntrer Id de reclamation a traiter : ");
    scanf("%s", id_rec);

    for (int i = 0; i < cpt_reclamation; i++) {
        if (strcmp(Tableau_rec[i].Id , id_rec) == 0) {
            index_rec = i;
            break;
        }
    }

    if (index_rec == -1) {
        printf("\nCette reclamation n'a pas trouvee.\n\n");
        return;
    }
        int choix;
        char note[100];
        printf("\nCette reclamation est trouvee :\n\n");

        printf("\nVous voulais faire quoi ?\n\n");
        printf("\t(1) Marquer comme 'en cours'\n");
        printf("\t(2) Marquer comme 'resolu'\n");
        printf("\t(3) Marquer comme 'rejete'\n");
        printf("\t(4) Ajouter une note interne\n");
        printf("\t>>> ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                strcpy(Tableau_rec[index_rec].Status, "en cours");
                printf("\nLe statut est change a (en cours).\n");
                break;

            case 2:
                strcpy(Tableau_rec[index_rec].Status, "resolu");
                printf("\nLe statut est changer a (resolue).\n");
                cpt_resolu++;

                int time_now = (int) time(NULL);
                diff = diff + (time_now - Tableau_rec[index_rec].heure_rec);
                break;

            case 3:
                strcpy(Tableau_rec[index_rec].Status, "rejete");
                printf("\nLe statut est changer a (rejete).\n");
                break;

            case 4:
                
                printf("\nAjouter une note interne : ");
                scanf(" %[^\n]", note); 

                strcat(Tableau_rec[index_rec].Description,"\nNote interne :\n");
                strcat(Tableau_rec[index_rec].Description, note);

                printf("\nLa note interne est ajoutee avec succes.\n");
                break;

            default:
                printf("\nChoix invalide.\n");
                break;
        }
        printf("\nReclamation traitee avec succes.\n");
}

void Afficher_Statistiques( int user_index){

    int choix , differance = 0 ;
    float delai_moyen , taux_resolu;

    do {
        printf("\n------------------ Bienvenu %s au Menu Statistiques --------------------\n",U[user_index].identifiant);
        printf("----------------------------------------------------------------------------\n\n");

        printf(" (1) Afficher le nombre total de reclamations\n");
        printf(" (2) Afficher le taux de resolution des reclamations\n");
        printf(" (3) Delai moyen de traitement des reclamations \n"); 
        printf(" (4) Rapport des Reclamation\n");
        printf(" (5) Quitter\n");
        printf("  >> ");
        
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                 printf("Le nombre total de reclamation : %d",cpt_reclamation);
                 break;
            case 2:
                  printf("Le taux de reclamation resolu : %d/%d\n", cpt_resolu,cpt_reclamation);
                  break;
            case 3:     
                 delai_moyen = (float) diff / cpt_resolu ;
                 printf("Delai moyen de traitement des reclamations : %0.f seconde ",delai_moyen);
                 break;
            case 4: 
                {
                 FILE *rapport = fopen("Rapport.txt","w");
                 fprintf(rapport ,"Rapport des Reclamation\n"
                                  ">> Le nombre total de reclamation : %d\n"
                                  ">> Le taux de de reclamation resolu : %d/%d\n"
                                  ">> Delai moyen de traitement des reclamations : %0.f seconde\n",
                                   cpt_reclamation,cpt_resolu,cpt_reclamation,delai_moyen);
                 fclose(rapport);
                 break;
                }               
            case 5:
                 printf("\nRetour au Menu Principal\n");
                 break;      
                            
            default:
                printf("Choix invalide.\n");
                break;
        }
    } while (choix != 5);
}

void Menu_Principale() {

    while (1) {

        int choix;
        printf("\n=========================  Gestion des reclamations  =========================\n");
        printf("=========================   ----------------------   =========================\n");
        printf("-------------------------       Menu Principal       -------------------------\n");
        printf("-------------------------   ----------------------   -------------------------\n\n\n");
        printf("\t\t\t\t(1) Inscription\n\n");
        printf("\t\t\t\t(2) Connexion\n\n");
        printf("\t\t\t\t(3) Quitter\n\n");
        printf("\t\t\t\t>> ");
        scanf("%d", &choix);  
         
        switch (choix) {
            case 1:
                Sign_Up();
                break;
            case 2:
                Sign_In();
                break;
            case 3:
                printf("Au revoir !\n");
                return; 
            default:
                printf("Choix invalide.\n");
                break;
        }
    }
}
int main() {
    Menu_Principale();
    return 0;
}