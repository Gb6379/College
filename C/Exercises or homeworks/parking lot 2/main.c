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
    struct carro c;
    struct estacionamento e;
    int vagaEscolhida;
    int i;

    for(i=0; i<5; i++){
        e.vaga[i] = -1;
    }

    for(i=0; i<5; i++) {
        printf("Digite a Vaga do veiculo:\n");
        scanf("%d", &vagaEscolhida);
            if(e.vaga[vagaEscolhida] != vagaEscolhida) {
                    printf("--Carro %d--\n\n", (i+1));
                    printf("Digite a Marca do veiculo:\n");
                    scanf("%s", c.marca);
                    printf("Digite o Modelo do veiculo:\n");
                    scanf("%s", c.modelo);
                    printf("Digite a Placa do veiculo:\n");
                    scanf("%s", c.placa);
                    e.vaga[i] = vagaEscolhida;
                    printf("Marca: %s\t Modelo: %s\t Placa: %s\t Vaga: %d\n\n", c.marca, c.modelo, c.placa, e.vaga[i]);


            }
            else if(e.vaga[vagaEscolhida] = vagaEscolhida) {
               printf("--VAGA JA OCUPADA, ESCOLHA OUTRA VAGA--\n\n");
                i--;
            }


            }


    return 0;
}
