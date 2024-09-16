#include <stdio.h>

int main()
{
    char c;
    printf("\n*** Voyelle ou Non ***\n\n");
    printf("Entrez un caractere >> ");
    scanf("%c",&c);
    switch (c)
    {
    case 'a':
        printf("c'est une voyelle");
        break;
    case 'o':
        printf("c'est une voyelle");
        break;
    case 'e':
        printf("c'est une voyelle");
        break;
    case 'i':
        printf("c'est une voyelle");
        break;
    case 'u':
        printf("c'est une voyelle");
        break;    
    case 'y':
        printf("c'est une voyelle");
        break;            
    default:
        printf("c'est une consonne");
        break;
    }

    return 0;
}