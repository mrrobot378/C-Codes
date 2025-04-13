void quadrado_asterisco_vazio(int n)
    {
         // Imprimir a primeira linha
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");

    // Imprimir as linhas intermedi�rias
    for (int i = 1; i < n - 1; i++) {
        printf("*"); // Primeiro asterisco

        // Imprimir os espa�os no meio
        for (int j = 0; j < n - 2; j++) {
            printf(" ");
        }

        printf("*\n"); // �ltimo asterisco e nova linha
    }

    //----------------------------------------------------------------------
    // Imprimir a �ltima linha (se n > 1)
    if (n > 1) {
        for (int i = 0; i < n; i++) {
            printf("*");
        }
        printf("\n");
    }
}
