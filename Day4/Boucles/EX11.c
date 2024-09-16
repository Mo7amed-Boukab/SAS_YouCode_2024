#include <stdio.h>

int main()
{
    float num ,moyenne ,sum = 0 ,cpt = -1;

    printf("\n*** Moyenne des Nombres ***\n\n");
    printf("Entrez une serie des nombres terminer par 0\n");
    do
    {
        scanf("%f",&num);
        sum = sum + num;
        cpt++;
        
    }while(num != 0);
    moyenne = sum / cpt;
    printf("La Moyenne >>> %.2f",moyenne);
    return 0; 
}