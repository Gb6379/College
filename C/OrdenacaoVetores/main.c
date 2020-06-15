#include <stdio.h>
#include <stdlib.h>
void dobrarVetor(int vetor[3]){
    int i;
    for(i=0; i<3; i++){
    vetor[i] = vetor[i]*2;//calculo dentro do for pois precisa ser executado para todos os valores dentro do vetor
    printf("Posicao %d : valor %d\n",i,vetor[i]);//exibirar a posicao do vetor que contem o valor e o valor atribuido so que dobrado
    }
}
void ordenar(int vetor[3]){
    int i;
    int j;
    int aux;
    for(i=0; i<3; i++){
        for(j=i+1; j<3; j++){
            if(vetor[i]>vetor[j]){//ordenando de ordem crescente é i>j e decrescente é i<j
                aux = vetor[i];//auxiliar recebe o vetor i
                vetor[i] = vetor[j];// vetor i recebe o vetor j
                vetor[j] = aux; // vetor j receve o auxiliar, trocando de lugar os vetores e ordenando

            }
        }
    }
    for(i=0; i<3; i++){
        printf("Posicao : %d  valor : %d\n",i,vetor[i]);
    }
}

int main()
{
    int vet[3];
    int i;
    for(i=0; i<3; i++){
        printf("Digite o valor do vetor na posicao %d\n",i);
        scanf("%d",&vet[i]);
    }
    dobrarVetor(vet);
    ordenar(vet);
    return 0;
}
