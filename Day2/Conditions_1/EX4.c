#include <stdio.h>
#include <math.h>

int main()
{
    double a , b , c , delta , x0 , x1 , x2;
    printf("\n***  Equation du Deuxieme Degre ***\n\n");
    printf("Entrez les parametres de l'equation ax2 + bx + c\n");
    printf("a = ");
    scanf("%lf",&a);
    printf("b = ");
    scanf("%lf",&b);
    printf("c = ");
    scanf("%lf",&c);
    delta = pow(b,2) - 4*a*c;
    x0 = -b / 2*a;
    x1 = (-b - sqrt(delta)) / 2*a;
    x2 = (-b + sqrt(delta)) / 2*a;
    if(delta == 0)
    {
        printf("L'equation admet une seul solution\nX = %.2lf ",x0);
    }
    else if (delta > 0)
    {
        printf("L'equation admet deux solutions\nX1 = %.2lf \t X2 = %.2lf",x1,x2);
    }
    else
    {
        printf("L'equation n'admet aucun solution ");
    }
    
    return 0;
}