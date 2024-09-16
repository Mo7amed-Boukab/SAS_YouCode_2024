/*Écrivez un programme C qui génère les `n` premiers termes de 
la suite de Fibonacci, où `n` est entré par l’utilisateur. La suite de Fibonacci est définie 
comme suit : F(0) = 0, F(1) = 1, et F(n) = F(n-1) + F(n-2).*/
#include <stdio.h>

int main()
{
    int n , U0 = 0 , U1 = 1 , Un;
    printf("\n*** Affichage de la Suite de Fibonacci ***\n\n");
    printf("Entrez le terme a calculer >> ");
    scanf("%d",&n);
    if(n == 0)
        printf("le %d terme de la suite de Fibonacci donne >>> 0",n);
    else if(n == 1)   
        printf("le %d terme de la suite de Fibonacci donne >>> 1",n);
    else
    {
        for(int i = 2 ; i <= n ; i++)
    {
        Un = U0 + U1;
        U0 = U1;
        U1 = Un;

    }
    printf("le %d terme de la suite de Fibonacci donne >>> %d",n,Un);
    }
    

    return 0;
}