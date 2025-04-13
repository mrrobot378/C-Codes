/*
        Programa que faz uma tabela de valores n com cada coluna sendo
        n,n*10,n*100 e n*1000, com n incrementando a cada iteração, 
        com 10 iterações (10 valores para cada coluna)
    */
    void saida_tabular()
    {
        int n = 1;

        //-----------------------------------------------------------------------------------

        printf("N\t10*N\t100*N\t1000*N\n\n");

        for (int i = 0; i < 9; i++)
        {
            printf("%d        %d      %d    %d\n" , n, (10*n), (100*n), (1000*n));
            n++;
        }
        printf("%d       %d     %d   %d" , n, (10*n), (100*n), (1000*n));
    }
