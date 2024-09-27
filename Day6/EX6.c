#include <stdio.h>


typedef struct{
   float rayon;
}AirCercle;
 
float air_cercle(AirCercle x)
{
    return 3.14 * x.rayon * x.rayon ;
}

int main()
{
    AirCercle c1;
    float air;
    printf("Entrez le rayon du cercle >> ");
    scanf("%f",&c1.rayon);
    air = air_cercle(c1);
    printf("L'air de cercle >>> %.2f",air);

    return 0;
}