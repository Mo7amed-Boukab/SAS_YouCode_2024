#include <stdio.h>

int main()
{
    int h1, m1, s1;  
    int h2, m2, s2; 
    
    printf("\n*** Comparaison d'Instants ***\n\n");
    printf("Entrez le premier instant (HH:MM:SS) >> ");
    scanf("%d:%d:%d", &h1, &m1, &s1);

    printf("Entrez le deuxieme instant (HH:MM:SS) >> ");
    scanf("%d:%d:%d", &h2, &m2, &s2);

    if(h1 < 24 && h2 < 24 && m1 < 60 && m2 < 60 && s1 < 60 && s2 < 60)
    {
        
         if (h1 < h2 || (h1 == h2 && m1 < m2) || (h1 == h2 && m1 == m2 && s1 < s2))
            {
                printf("Le premier instant vient avant le deuxieme");
            } 
    else if (h1 > h2 || (h1 == h2 && m1 > m2) || (h1 == h2 && m1 == m2 && s1 > s2))
            {
                printf("Le deuxieme instant vient avant le premier");
            } 
    else 
        {
             printf("Il s'agit du meme instant");
        }
    }

    else
    {
        printf("Error..");
    }


    return 0;
}