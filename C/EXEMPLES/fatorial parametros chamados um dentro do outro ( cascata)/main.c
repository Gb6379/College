#include <stdio.h>
#include <stdlib.h>

void ler();
void calcular(int numero);
void exibir(int resultado);

void ler(){
    int numero;
    printf("Digite um valor que deseja realizar o fatorial\n");
    scanf("%d",&numero);
    calcular(numero);


}
//passando a informacao do valor coletado no armazenamento acima
void calcular(int numero){
    int fatorial;

    for (fatorial=numero-1; fatorial>0; fatorial--){

        numero = numero * fatorial;
    }
    exibir(numero);
}
void exibir (int resultado){
    printf("Resultado : %d\n", resultado);
}
int main(){
    ler();
    return 0;
}
