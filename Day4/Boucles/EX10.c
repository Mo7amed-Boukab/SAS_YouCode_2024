#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int  n ;
    char mode_passe;
    char T[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z','a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    srand (time(0));
    printf("\n*** Generateur de Mot de Passe ***\n\n");
    printf("Entrez le nombre de chiffre >> ");
    scanf("%d",&n);
    printf("Le mode de passe >>>  ");

    for(int i = 1 ; i <= n ; i++ )
    {
        mode_passe = rand() % (sizeof(T) / sizeof(T[0]));
        printf("%c",T[mode_passe]);
    }
    

    return 0;
}