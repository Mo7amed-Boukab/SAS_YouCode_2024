#include <stdio.h>

int Produit( int a , int b )
{  
   return a * b ;
}
int main()
{
    int a , b ,resultat ;
    printf("Entrez le premier nombre >> ");
    scanf("%d",&a);
    printf("Entrez le deuxieme nombre >> ");
    scanf("%d",&b);
    
    resultat = Produit(a,b);
    printf("Le resultat >>> %d",resultat);

    return 0;
}