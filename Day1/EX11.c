#include <stdio.h>

int main()
{
    float longueur , largeur , surface;
    printf("\n*** Surface d'un rectangle ***\n\n");
    printf("Entrez la longeur du rectangle >> ");
    scanf("%f",&longueur);
    printf("Entrez le largeur du rectangle >> ");
    scanf("%f",&largeur);
    surface = longueur * largeur;
    printf("La surface de rectangle >>> %.2f",surface);

    return 0;
}