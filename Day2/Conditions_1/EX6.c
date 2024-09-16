#include <stdio.h>

int main()
{
    int num;
    printf("\n***  Positif, Negatif ou Nul ***\n\n");
    printf("Tapez un nombre >> ");
    scanf("%d",&num);
    if(num > 0)
    {
        printf("Ce nombre est positif");
    }
    else if(num < 0)
    {
        printf("Ce nombre est negatif");
    }
    else
    {
        printf("Ce nombre est null");
    }


    return 0;
}