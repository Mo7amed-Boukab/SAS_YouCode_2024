#include <stdio.h>


typedef struct{
    char nom[50] ;
    char prenom[50];
    int age;
}student ;
int main()
{
    student s1 ;
    printf("Entrez votre nom >> ");
    scanf("%s",&s1.nom);
    printf("Entrez votre prenom >> ");
    scanf("%s",&s1.prenom);
    printf("Entrez votre age >> ");
    scanf("%d",&s1.age);
    printf("Nom >> %s\nPrenom >> %s\nAge >> %d",s1.nom,s1.prenom,s1.age);
    

    return 0;
}