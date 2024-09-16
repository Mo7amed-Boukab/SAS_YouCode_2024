#include <stdio.h>

int main()
{
    char c;
    printf("\n*** Verification d'Alphabet ***\n\n");
    printf("Tapez un alphabet >> ");
    scanf("%c",&c);
    if((c >= 65 && c <= 90 ) || (c >= 97 && c <= 122))
    {
        printf("Bravau!\n");
        if(c >= 65 && c <= 90 )
        {
            printf("Cet alphabet est en majuscule");
        }
        else
        {
            printf("Cet alphabet est en  minuscule");
        }
    }
    else
    {
        printf("Ce caractere n'est pas un alphabet");
    }
    return 0;
}