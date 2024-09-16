#include <stdio.h>

int main()
{
    int num , fact = 1;
    printf("\n*** Factorielle d'un Nombre ***\n\n");
    do{
       printf("Entrez un nombre entier positif >> ");
       scanf("%d",&num);
    }while(num < 1);
    
    for( int i = 1 ; i <= num ; i++ )
    {
       fact *=  i;     
    }
    printf("%d! >>> %d",num,fact);
    

    return 0;
}