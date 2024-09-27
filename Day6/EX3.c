#include <stdio.h>


typedef struct{
    float longeur;
    float largeur;
}AirRectangle;
 
float Air_Rectangle(AirRectangle x)
{
    return  x.longeur * x.largeur ;
}
int main()
{
    AirRectangle Rectangle1;
    float air;
    printf("Entrez la langeur >> ");
    scanf("%f",&Rectangle1.longeur);
    printf("Entrez le largeur >> ");
    scanf("%f",&Rectangle1.largeur);
    air = Air_Rectangle(Rectangle1);
    printf("L'air de Rectangle >>> %.2f",air);
    return 0;
}
