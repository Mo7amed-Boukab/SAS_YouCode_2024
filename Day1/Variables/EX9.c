#include <stdio.h>
#include <math.h>

int main()
{
    float x1 , x2 , y1 , y2 , z1 , z2 , Distance;
    printf("\n*** Calcul de la distance entre deux points dans un espace 3D ***\n\n");
    printf("Entrer les coordonnees des deux points >>> \n");
    printf("Le Point (A) :\nx1 = ");
    scanf("%f",&x1);
    printf("y1 = ");
    scanf("%f",&y1);
    printf("z1 = ");
    scanf("%f",&z1);
    printf("Le Point (B):\nx2 = ");
    scanf("%f",&x2);
    printf("y2 = ");
    scanf("%f",&y2);
    printf("z2 = ");
    scanf("%f",&z2);

    Distance = sqrt(pow((x2-x1),2)+pow((y2-y1),2)+pow((z2-z1),2));
    printf("La distance entre ces deux points >>> %.2f",Distance);

    return 0;
}