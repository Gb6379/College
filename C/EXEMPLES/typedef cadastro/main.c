#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char nome[20];
    char cidade[20];
    char dataCompra[20];
    float valorCompra;
}Cliente;
int main()
{
    Cliente cliente[5];
    int i;

    for(i=0; i<5; i++){
        printf("Digite o nome do %do cliente\n", i+1);
        scanf("%s",cliente[i].nome);

        printf("Digite a cidade do %do cliente\n", i+1);
        scanf("%s",cliente[i].cidade);

        printf("Digite a data da compra do %do cliente\n", i+1);
        scanf("%s",cliente[i].dataCompra);

        printf("Digite o valor da compra do %do cliente\n", i+1);
        scanf("%f",&cliente[i].valorCompra);
    }
    for(i=0; i<5; i++){
        printf("DADOS CLIENTE %d", i+1);
        printf("NOME : %s\n", cliente[i].nome);
        printf("CIDADE : %s\n", cliente[i].cidade);
        printf("DATA DA COMPRA: %s\n", cliente[i].dataCompra);
        printf("VALOR DA COMPRA : %.2f\n",cliente[i].valorCompra);
        printf("\n\n");



    }
    return 0;
}
