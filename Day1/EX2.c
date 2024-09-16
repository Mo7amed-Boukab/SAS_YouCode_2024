#include <stdio.h>

int main()
{
    float C , K;
    printf("\n*** Conversion de la temperature ***\n\n");
    printf("Entrer la temperature en Celsius >> ");
    scanf("%f",&C);
    K = C + 273.15;
    printf("La temperature en Kelvin >>> %.2f\n",K);
   
    return 0;
}