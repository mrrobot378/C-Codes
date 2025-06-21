#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    typedef struct NoArv
    {
        int valor;
        struct NoArv *esquerda;
        struct NoArv *direita;
    }NoArv;
    
    NoArv* inserir(NoArv* raiz, int num)
{
    if (raiz == NULL)
    {
        NoArv* aux = malloc(sizeof(NoArv));
        if (aux == NULL) {
            perror("Erro ao alocar memória para o novo nó");
            exit(EXIT_FAILURE);
        }
        aux->valor = num;
        aux->esquerda = NULL;
        aux->direita = NULL;
        return aux;
    } 
 
    if (num < raiz->valor) {
        raiz->esquerda = inserir(raiz->esquerda, num);
    } else {
        raiz->direita = inserir(raiz->direita, num);
    }
    return raiz; 
}
    
    void imprimir(NoArv* raiz)
    {
        if(raiz){
            imprimir(raiz->esquerda);
            printf("%d ", raiz->valor);
            imprimir(raiz->direita);
        }
    }
    
    NoArv* buscar(NoArv* raiz, int num)
    {
        if(raiz)
        {
            if(num == raiz->valor)
            return raiz;
        else if(num < raiz->valor)
            return buscar(raiz->esquerda, num);
        else
            return buscar(raiz->direita, num);
        }
    return NULL;
        }

int main()
{
    int opcao,num,num2;
    NoArv *raiz = NULL, *busca = NULL;
    
    do
    {
        printf("\n\tMENU\n\t0-Sair\n\t1-Inserir\n\t2-Buscar\n\t3-Imprimir\n");
        scanf("%d", &opcao);
        switch(opcao)
        {
            case 1:
                printf("Digite o valor a ser inserido:\n");
                scanf("%d",&num);
                raiz = inserir(raiz,num);
            break;
            
            case 2:
                printf("Digite o valor a ser buscado:\n");
                scanf("%d",&num2);
                busca = buscar(raiz,num2);
                if (busca)
                {
                    printf("Valor %d encontrado na árvore!", busca->valor);
                }else{
                    printf("Valor não encontrado!");
                }
            break;
            
            case 3:
                printf("Impressão:\n");
                imprimir(raiz);
                printf("\n");
            break;
        }
        
    }while(opcao != 0);
    

    return 0;
}