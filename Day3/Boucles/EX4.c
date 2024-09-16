#include <stdio.h>

int main()
{
    int num, cpt = 0 , i = 1;
    printf("\n*** Affichage des N Premiers Nombres Impairs ***\n\n");
    printf("Entrez un nombre >> ");
    scanf("%d",&num);
    printf("Les %d premier nombres impairs >>> ",num);
    
    while(cpt != num)
        {
            if(i % 2 != 0)
            {
                printf("%d ",i);
                cpt++;
            } 
            i++;
        }            
 
    
    return 0;
}