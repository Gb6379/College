#include <stdio.h>
#include <stdlib.h>

void somar (int valor1, int valor2){
    printf("SOMA: %d\n",valor1+valor2);

}
void subtrair(int valor1, int valor2){
    printf("SUBTRACAO: %d\n",valor1-valor2);

}
void multiplicar(int valor1, int valor2){
    printf("MULTIPLICACAO: %d\n",valor1*valor2);

}
void dividir(int valor1, int valor2){
    printf("DIVISAO %d\n",valor1/valor2);
}

int main(){
    int valor1, valor2;

    printf("Digite 2 valores\n");
    scanf("%d %d",&valor1,&valor2);

    somar(valor1,valor2);
    subtrair(valor1,valor2);
    multiplicar(valor1,valor2);
    dividir(valor1,valor2);

    return 0;
}
