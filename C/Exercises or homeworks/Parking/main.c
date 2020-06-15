#include <stdio.h>
#include <stdlib.h>

struct parking{
    int vetor[5], i;
    char carro [10];
    int placa;
};

int main(){
struct parking p;
int i;

    for(i=0; i<5; i++){
    printf("Digite o modelo do seu carro \n");
    scanf("%s",&p.carro);

    printf("Digite a placa do seu carro\n");
    scanf("%d",&p.placa);
    }


    printf("VAGAS DISPONIVEIS/N");
    printf("[ 1 ] -- [ 2 ] -- [ 3 ] -- [ 4 ] -- [ 5 ] \n" );


    for(i=0; i<5; i++) {
    printf("Digite o numero da vaga que deseja estacionar\n");
    scanf("%d",&p.vetor[i]);
    }

    if(p.vetor[i] == 1){
         printf(" [ 2 ] -- [ 3 ] -- [ 4 ] -- [ 5 ] \n" );
    }
    else if(p.vetor[i] == 2){
        printf("[ 1 ] -- [ 3 ] -- [ 4 ] -- [ 5 ] \n" );
    }
    else if(p.vetor[i] == 3){
        printf("[ 1 ] -- [ 2 ] -- [ 4 ] -- [ 5 ] \n" );

    }
    else if(p.vetor[i] == 4){
        printf("[ 1 ] -- [ 2 ] -- [ 3 ] --  [ 5 ] \n" );
    }
    else if(p.vetor[i] == 5){
        printf("[ 1 ] -- [ 2 ] -- [ 3 ] -- [ 4 ]  \n" );
    }







    return 0;
}

