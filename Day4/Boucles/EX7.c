/*Écrivez un programme C qui génère les n premiers
 termes de la suite de Fibonacci,où n est entré par l’utilisateur.
La suite de Fibonacci est définie comme suit : F(0) = 0, F(1) = 1, et F(n) = F(n-1) + F(n-2).
*/
#include <stdio.h>

int main()
{
    int terme, U0 = 0, U1 = 1, Un = 0 ;
    printf("\n*** Suite de Fibonacci ***\n\n");
    printf("Entrez le terme a calculer >> ");
    scanf("%d",&terme);

    if(terme == 0 ) Un = 0;
    else if (terme == 1) Un = 1;
    else
    {
        for( int i = 2 ; i <= terme; i++)
        {
           Un =  U0 + U1;
           U0 = U1;
           U1 = Un;
        }
    }
    printf("Le %d terme de la suite de Fibonacci donne >>> %d",terme,Un);

    return 0;
}