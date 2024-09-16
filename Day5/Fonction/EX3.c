#include <stdio.h>

int Maximum(int a , int b)
{
    int max = a ;
    if (b > max)
    {
        max = b;
    }
    return max ;
}

int main()
{
    int a , b ,resultat ;
    printf("Entrez le premier nombre >> ");
    scanf("%d",&a);
    printf("Entrez le deuxieme nombre >> ");
    scanf("%d",&b);
    resultat = Maximum(a,b);
    printf("Le Max >>> %d",resultat);
    return 0;
}