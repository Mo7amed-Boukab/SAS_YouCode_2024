#include <stdio.h>

int main()
{
    int num , tmp;
    printf("\n*** Tableau en Ordre Croissant ***\n\n");
    printf("Entrez le nombre des elements de Tableau >> ");
    scanf("%d",&num);
    int T[num];
    printf("Remplissez le Tableau\n");
    for( int i = 0 ; i < num ; i++ )
    {
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }
    for( int i = 0 ; i < num ; i++ )
    {
        for(int j = i+1 ; j < num ; j++ )
       {
            if(T[i] > T[j]) 
            {
                tmp = T[i];
                T[i] = T[j];
                T[j] = tmp;   
            } 
                
       }
    
    }
    printf("Le Tableau en Ordre Croissant >>>  ");
     for(int i = 0 ; i < num ; i++)
    {
        printf("%d  ",T[i]);
    }
  
    return 0;
}