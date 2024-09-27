#include <stdio.h>


typedef struct{
    char nom[50] ;
    char prenom[50];
    int note[5];
}student ;
int main()
{
    student s1;
    printf("Entrez votre nom >> ");
    scanf("%s",&s1.nom);
    printf("Entrez votre prenom >> ");
    scanf("%s",&s1.prenom);
    printf("Entrez les notes >>\n"); 
    for( int i = 0 ; i < 5 ; i++ )
    {
        printf("Note %d = ",i+1);
        scanf("%d",&s1.note[i]);
    }
    
    printf("Nom >> %s\nPrenom >> %s",s1.nom,s1.prenom);
    for( int i = 0 ; i < 5 ; i++ )
    {
        printf("\nNote %d = %d\n",i+1,s1.note[i]);
    }
    

    return 0;
}