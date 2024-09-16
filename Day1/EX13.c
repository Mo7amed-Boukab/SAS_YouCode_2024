#include <stdio.h>

int main()
{
    int num , num_;
    int binaire[100] , hexadecimal[100] , i=0 , j=0;
    printf("\n*** Affichage des valeurs binaire et hexadecimale equivalentes ***\n\n");
    printf("Entrez un nombre en decimal >> ");
    scanf("%d",&num_);
    num = num_;
    printf("Ca valeur equivalente en binaire >>> ");
    do
    {  
        binaire[i] = num % 2;
        num = num / 2;
        i++;
        
    }while(num > 0); 
    for( int x = i-1; x >= 0;x-- )
    {
       printf("%d",binaire[x]);
    }
      
    printf("\nCa valeur equivalente en hexadecimal >>> ");
    do
    {
        hexadecimal[j] = num_ % 16;
        num_ = num_ / 16;
        j++;

    } while (num_ > 0);
     for( int y = j-1; y >= 0;y-- )
    {
         if(hexadecimal[y] == 10)
        {
            printf("A");
        }
        else if(hexadecimal[y] == 11)
        {
            printf("B");
        }
        else if(hexadecimal[y] == 12)
        {
            printf("C");
        }
        else if(hexadecimal[y] == 13)
        {
            printf("D");
        }
        else if(hexadecimal[y] == 14)
        {
            printf("E");
        }
        else if(hexadecimal[y] == 15)
        {
            printf("F");
        }
        else
        {
            printf("%d",hexadecimal[y]);
        }
    }
    
    return 0;
}