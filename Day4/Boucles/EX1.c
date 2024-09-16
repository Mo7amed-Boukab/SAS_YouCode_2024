#include<stdio.h>

int main ()
{
    int num;
    printf("\n*** Table de Multiplication Inversee ***\n\n");
    printf("Entrez un nombre >>> ");
    scanf("%d",&num);
  
    for(int i = 10 ; i >= 1 ; i--)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }
    return 0;
}