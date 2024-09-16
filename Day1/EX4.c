#include <stdio.h>

int main()
{  
    float km_par_heure , m_par_seconde;
    printf("\n *** Conversion de la vitesse ***\n\n");
    printf("Entrer la vitesse en kiloMetre par heure >> ");
    scanf("%f",&km_par_heure);
    m_par_seconde = km_par_heure * 0.27778;
    printf("La vitesse en Metre par seconde >>> %.2f ",m_par_seconde);

    return 0;
}