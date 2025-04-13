void quadrado_asterisco_vazio(int n)
    {
         // Imprimir a primeira linha
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");

    // Imprimir as linhas intermediárias
    for (int i = 1; i < n - 1; i++) {
        printf("*"); // Primeiro asterisco

        // Imprimir os espaços no meio
        for (int j = 0; j < n - 2; j++) {
            printf(" ");
        }

        printf("*\n"); // Último asterisco e nova linha
    }

    //----------------------------------------------------------------------
    // Imprimir a última linha (se n > 1)
    if (n > 1) {
        for (int i = 0; i < n; i++) {
            printf("*");
        }
        printf("\n");
    }
}
