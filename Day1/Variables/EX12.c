#include <stdio.h>

int main()
{
    int num , n1 , n2 , n3 , n4;
    printf("\n *** Nombre entier a quatre chiffres en ordre inverse ***\n\n");
    printf("Entrer un nombre entier a 4 chiffre >> ");
    scanf("%d",&num);
    do
    {
        printf("Error.. \n");
        printf("Entrer un nombre entier a 4 chiffre >> ");
        scanf("%d",&num);
    } while(num < 1000 || num > 9999);
    
    n1 = num % 10;
    n2 = (num/10) % 10;
    n3 = (num/100) % 10; 
    n4=  num / 1000;
    printf("L'inverse >>> %d%d%d%d",n1,n2,n3,n4);
    
   

    return 0;
}