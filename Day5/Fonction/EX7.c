#include <stdio.h>
#include <string.h>

void Inverse(char T[] , int size )
{
    int i , inverse ;
    for( i = size -1 ; i >= 0 ; i--)
    {
       printf("%c",T[i]);
    }

}

int main()
{
    char T[] = "mohamedboukab"; 
    int taille = strlen(T);

    printf("L'inverse >>> ");
    Inverse(T, taille); 
    
    return 0;
}