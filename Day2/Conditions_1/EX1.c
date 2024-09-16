#include <stdio.h>

int main()
{
    int num;
    printf("\n*** Paire ou Impaire ***\n\n");
    printf("Entrez un nombre >> ");
    scanf("%d",&num);
    if(num % 2 == 0)
    {
        printf("Ce nombre est paire");
    }  
    else
    {
        printf("Ce nombre est impaire");
    }

    return 0;
}