#include <stdio.h>

int Minimum(int a , int b)
{
    int min = a ;
    if (b < min)
    {
        min = b;
    }
    return min ;
}

int main()
{
    int a , b ,resultat ;
    printf("Entrez le premier nombre >> ");
    scanf("%d",&a);
    printf("Entrez le deuxieme nombre >> ");
    scanf("%d",&b);
    resultat = Minimum(a,b);
    printf("Le Min >>> %d",resultat);
    return 0;
}

