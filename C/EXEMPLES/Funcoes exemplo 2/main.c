#include <stdio.h>
#include <stdlib.h>

int vetor[10];
void lerDados();
void mostrar();


int main()
{
    lerDados();
    mostrar();
    return 0;
}
void lerDados(){


    int i;
    for(i=0; i<10; i++){
        printf("Digite um numero\n");
        scanf("%d",&vetor[i]);
        }
}
void mostrar(){
    int i;

    printf("PARES\n");
    for(i=0; i<10; i++){
        if(vetor[i]%2==0){
                printf("posicao: %d Numero:%d\n",i,vetor[i]);

        }
    }
}
