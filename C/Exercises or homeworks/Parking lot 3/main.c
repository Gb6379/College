#include <stdio.h>
#include <stdlib.h>

struct carro{
    char marca[15];
    char modelo[15];
    char placa[15];
};
struct estacionamento{
    int vaga[5];
};

int main()
{
    struct carro ca;
    struct estacionamento es;
    int vagaEscolhida;
    int i;

    for(i=0; i<5; i++){
        es.vaga[i] = -1;
    }

    for(i=0; i<5; i++) {
        printf("De 5 vagas, escolha uma pra seu veiculo:\n");
        scanf("%d", &vagaEscolhida);

            if(es.vaga[vagaEscolhida] != vagaEscolhida) {
                printf("--Carro %d--\n\n", (i+1));
                printf("Digite a Marca do veiculo:\n");
                scanf("%s", ca.marca);
                printf("Digite o Modelo do veiculo:\n");
                scanf("%s", ca.modelo);
                printf("Digite a Placa do veiculo:\n");
                scanf("%s", ca.placa);
                es.vaga[vagaEscolhida] = vagaEscolhida;
                printf("Marca: %s\t Modelo: %s\t Placa: %s\t Vaga: %d\n\n", ca.marca, ca.modelo, ca.placa, es.vaga[vagaEscolhida]);
            }
            else {
                printf("--VAGA JA OCUPADA, ESCOLHA OUTRA VAGA--\n\n");
                i--;
            }
     }

    return 0;
}
