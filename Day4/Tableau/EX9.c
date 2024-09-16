int main()
{
    int num;
    printf("\n*** Inversion d'un Tableau ***\n\n");
    printf("Entrez le nombre des element de Tableau >>> ");
    scanf("%d",&num);
    int T[num];
    printf("Remplissez le Tableau\n");
    for( int i = 0 ; i < num ; i++ )
    {
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }
    printf("L'inverse de Tableau\n");
    int cpt = 0;
    for( int i = num-1 ; i >= 0 ; i-- )
    {
        printf("T[%d] = %d\n",cpt,T[i]);
        cpt++;
    }

    return 0;
}