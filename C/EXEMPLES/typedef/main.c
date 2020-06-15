#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char marca [20];
    char modelo[25];
    int numPortas;

}Roteador;
int main(){
    Roteador roteador;

    printf("Digite a marca\n");
    gets(roteador.marca);

    printf("Digite o modelo\n");
    gets(roteador.modelo);

    printf("Digite o numero de portas\n");
    scanf("%d",&roteador.numPortas);

    printf("Marca : %s\n" "Modelo: %s\n" "Portas: %d\n",roteador.marca,roteador.modelo,roteador.numPortas);
    return 0;
}
