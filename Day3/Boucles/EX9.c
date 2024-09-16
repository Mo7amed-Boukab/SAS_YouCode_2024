/*Écrivez un programme C qui demande à l’utilisateur un entier positif 
et compte le nombre de chiffres dans cet entier. 
Par exemple, pour `n` = 12345, affichez : `Nombre de chiffres = 5`.*/
#include <stdio.h>

int main()
{
    int  x , cpt = 0;
    printf("\n*** Compteur de Chiffres **\n\n");
    printf("Entrez un nombre >> ");
    scanf("%d",&x);
    while(x != 0)
    {
        x = x / 10 ;
        cpt++;
    }
    printf("le nombre de chiffre >>> %d",cpt);
    
    return 0;
}