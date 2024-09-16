#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2; 
    float x, y; 
    float determinant;          
    
    printf("\n *** Point sur un Segment ***\n\n");

    printf("Entrez les coordonnees du premier point du segment (x1, y1) >>\n");
    scanf("%f %f", &x1, &y1);

    printf("Entrez les coordonnees du deuxieme point du segment (x2, y2) >\n");
    scanf("%f %f", &x2, &y2);

    printf("Entrez les coordonnees du point A tester (x, y) >>\n");
    scanf("%f %f", &x, &y);

    determinant = (x - x1) * (y2 - y1) - (y - y1) * (x2 - x1);
    
    if (determinant == 0.0)
    {
        
        if ((x >= fmin(x1 , x2) && x <= fmax(x1 , x2)) && (y >= fmin(y1 , y2) && y <= fmax(y1 , y2))) 
        {
            printf("Le point se trouve sur le segment");
        } 
        else
        {
            printf("Le point est colinéaire mais ne se trouve pas sur le segment");
        }
    } 
    else 
    {
        printf("Le point ne se trouve pas sur le segment");
    }

    return 0;
}