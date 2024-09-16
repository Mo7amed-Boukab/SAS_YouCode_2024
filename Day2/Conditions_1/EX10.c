#include <stdio.h>

int main()
{
    int j , m , a;
    printf("\n *** Formatage de la Date ***\n\n");
    printf("Tapez une date (Jour/Mois/Annee)\n");
    printf("Jour : ");
    scanf("%d",&j);
    printf("Mois : ");
    scanf("%d",&m);
    printf("Annee : ");
    scanf("%d",&a);
    switch (m)
    {
    case 1 :
        printf("%d-Janvier-%d",j,a);
        break;
    case 2 :
        printf("%d-Fevrier-%d",j,a);
        break;
    case 3 :
        printf("%d-Mars-%d",j,a);
        break;
    case 4 :
        printf("%d-Avril-%d",j,a);
        break;
    case 5 :
        printf("%d-Mai-%d",j,a);
        break;
    case 6 :
        printf("%d-Juin-%d",j,a);
        break;
    case 7 :
        printf("%d-Juillet-%d",j,a);
        break;
    case 8 :
        printf("%d-Aout-%d",j,a);
        break;
    case 9 :
        printf("%d-September-%d",j,a);
        break;
     case 10 :
        printf("%d-October-%d",j,a);
        break;
    case 11 :
        printf("%d-November-%d",j,a);
        break;
    case 12 :
        printf("%d-December-%d",j,a);
        break;    
        
    default:
        printf("Error.. veuillez entrer une date correct");
        break;
    }
       
  
    return 0;
}

