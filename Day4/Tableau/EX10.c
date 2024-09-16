int main()
{
    int num , rechercher;
    int trouver = 0;
    printf("\n*** Rechercher un Element ***\n\n");
    printf("Entrez le nombre des elements de Tableau >>> ");
    scanf("%d",&num);
    int T[num];
    printf("Remplissez le Tableau\n");
    for( int i = 0 ; i < num ; i++ )
    {
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }
    printf("Entrez l'element a rechercher >>> ");
    scanf("%d",&rechercher);
    for( int i = 0 ; i < num ; i++ )
    {
        if(T[i] == rechercher)
        {
            trouver = 1;
            break;
        }        
    }
    if(trouver == 1)
       printf("Ce nombre est trouver");
    else
       printf("Ce nombre n'est exite pas");

    return 0;
}