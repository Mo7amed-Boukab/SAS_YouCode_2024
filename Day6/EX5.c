#include <stdio.h>


typedef struct{
   char Nom[30];
   float Prix;
   float Quantite;
 
}Produit;
 


int main()
{
    Produit P[3];
    for( int i = 0 ; i < 3 ; i++ )
    {
       printf("Entrez le Nom de produit %d >> ",i+1);
       scanf("%s",P[i].Nom);
       printf("Entrez le prix de produit %d >> ",i+1);
       scanf("%d",&P[i].Prix);
       printf("Entrez  quantite de produit %d >>",i+1);
       scanf("%d",&P[i].Quantite);
    }

    for( int i = 0 ; i < 3 ; i++ )
    {
        printf("Preduit %d\n",i+1);
        printf("Nom >>> %s\n",P[i].Nom);
        printf("Prix >>> %d\n",P[i].Prix);
        printf("Quantite >>> %d\n",P[i].Quantite);
        printf("------------------------------------\n");
       
    }

    return 0;
}
