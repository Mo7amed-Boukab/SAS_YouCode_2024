#include <stdio.h>

int main()
{
float note;
printf("\n*** Mention Obtenue ***\n\n");
printf("Entrez la moyenne de votre notes >> ");
scanf("%f",&note);
if(note < 10)
{
    printf("Vous etez recale");
}
else if(note >= 10 && note < 12)
{
    printf("Vous etez obtient une mention passable");
}
else if(note >= 12 && note < 14)
{
    printf("Vous etez obtient une mention assez bien");
}
else if(note >= 14 && note < 16)
{
    printf("Vous etez obtient une mention bien");
}
else 
{
    printf("Vous etez obtient une mention tres bien");
}

    return 0;
}