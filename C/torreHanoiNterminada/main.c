#include <stdio.h>
#include <stdlib.h>

// arco1 = 1,arco2 = 2,arco3 = 3;
int pino1[3];//primeiro pino ja esta carregado com os arcos na funcao mostrar arcos
int pino2[3];//pino 2 e 3 ficaram vazios até ordem de serem preenchidos
int pino3[3];
int i;

void mostrarArcos(){//tentar um jeito de incrementar os pinos sem precisar setar o valor antes;
    pino1[0]=3;
    pino1[1]=2;
    pino1[2]=1;
    printf(" Torre A\t\t Torre B\t\tTorre C\n\n");
    for(i=0; i<3; i++){
        printf("    |\n Arco %d\t\t Arco %d\t\t  Arco %d\n",pino1[i],pino2[i],pino3[i]);

    }
}
void moverArcos(){
    mostrarArcos();
    printf("Digite o valor do arco que deseja mover\n");
}

int main()
{
    mostrarArcos();
    return 0;
}
