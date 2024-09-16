#include <stdio.h>
#include <math.h>

int main()
{ 
    float rayon , volume;
    const float pi = 3.14;
    printf("\n*** Volume d'une sphere ***\n\n");
    printf("Entrez le rayon de la sphere >> ");
    scanf("%f",&rayon);
    volume = (float)4/3 * pi * pow(rayon,3);
    printf("Le volume de la sphere >>> %.2f",volume);
    
    return 0;
}