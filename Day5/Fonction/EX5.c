#include <stdio.h>

int Factoriel(int F )
{
    int fact = 1;
    for( int i = 1 ; i <= F; i++)
    {
      fact = fact * i ; 
    }
    return fact;
}

int main()
{
    int a , resultat ;
    printf("Entrez un nombre >> ");
    scanf("%d",&a);
;
    resultat = Factoriel(a);
    printf("%d! >>> %d",a,resultat);
    return 0;
}
