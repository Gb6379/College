#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char nome[20];
    char cidade[20];
    char dataCompra[20];
    float valorCompra;
}Cliente;

int main(){
    Cliente cliente[5];
    int i;

    for(i=0; i<2; i++){
        printf("Digite o nome do %do cliente a cadastrar\n", i+1);
        scanf("%s",cliente[i].nome);

        printf("Digite a cidade\n");
        scanf("%s",cliente[i].cidade);

        printf("Informe a data da compra\n");
        scanf("%s",cliente[i].dataCompra);

        printf("Informe o valor da compra\n");
        scanf("%f",cliente[i].valorCompra);
    }

    return 0;
}
