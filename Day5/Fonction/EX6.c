#include <stdio.h>

int Terme_Fibonacci(int T )
{
    int U0 = 0, U1 = 1, Un;
    if(T == 0) Un = 0;
    else if (T == 1) Un = 1;
    else 
    {
        for( int i = 2 ; i <= T ; i++ )
        {
             Un = U0 + U1;
             U0 = U1;
             U1 = Un;
        }
        
    }
   
    return Un;
}

int main()
{
    int T;
    printf("Entrez le terme de la suite fibonacci >> ");
    scanf("%d",&T);

    int Terme = Terme_Fibonacci(T);
    printf("Le %d terme donne >>> %d",T,Terme);
    return 0;
}