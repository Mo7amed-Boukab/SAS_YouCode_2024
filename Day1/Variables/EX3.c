#include <stdio.h>

int main()
{  
    float Km , Yards;
    printf("\n*** Conversion de la distance ***\n\n");
    printf("Entrer la distance en kiloMetre >> ");
    scanf("%f",&Km);
    Yards = Km * 1093.61;
    printf("La distance en Yards >>> %.2f",Yards);

    return 0;
}