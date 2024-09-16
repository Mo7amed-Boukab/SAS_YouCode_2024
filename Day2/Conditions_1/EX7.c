#include <stdio.h>

int main()
{
    char c;
    printf("\n*** Alphabet Majuscule ***\n\n");
    printf("Tapez un alphabet majuscule >> ");
    scanf("%c",&c);
    if(c > 64 && c < 91)
    {
        printf("Bravo");
    }
    else
    {
        printf("Cet alphabet n'est pas en majuscule");
    }

    return 0;
}