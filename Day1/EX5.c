#include <stdio.h>

int main()
{
    float C;
    printf("\n*** Affichage Temperature ***\n\n");
    printf("Entrer la temperature en Celsius >> ");
    scanf("%f",&C);

    if(C<0)
    {
        printf("Solide");
    }
    else if(C>=100)
    {
        printf("Gaz");
    }
  
    else
    {
        printf("Liquide");
    }
    return 0;
}