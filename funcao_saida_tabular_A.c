/*
        Programa que faz uma tabela de valores n com cada coluna sendo
        n,n+2,n+4 e n+6, com n incrementando a cada itera��o, 
        com 10 itera��es (10 valores para cada coluna)
    */
    void saida_tabular_A()
    {
        int n = 3;

        //-----------------------------------------------------------------------------------

        printf("A\tA+2\tA+4\tA+6\n\n");

        for (int i = 0; i < 5; i++)
        {
            printf("%d %8d %7d %7d\n" , n, n+2, n+4, n+6);
            n+=3;
        }
        
    }
