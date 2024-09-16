#include <stdio.h>

int verification( int n)
{
    if( n % 2 == 0) 
    {
        return 1;
    }
     
    else 
    {
        return 0;
    }
   
}

int main()
{ 
    int x;
    printf("Entrez un nombre >>> ");
    scanf("%d",&x);
    if (verification(x) == 1) 
    {
        printf("Ce nombre est pair");
    }
    else 
    {
        printf("Ce nombre est impair");
    }
    
    return 0;
}