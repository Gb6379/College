#include <stdio.h>
#include <stdlib.h>
float valor1,valor2;


void somar(){

    printf("Soma: %.2f\n",valor1+valor2);

}
void subtrair(){

    printf("Subtrair: %.2f\n ", valor1-valor2);
}
void multiplicar(){

    printf("Multiplicacao: %.2f\n",valor1*valor2);
}
void dividir(){

    printf("Divisao: %.2f\n",valor1/valor2);
}
int main()
{
    int opcao;
    printf("Digite a operacao que deseja realizar\n");
    printf("(1) -- somar\n");
    printf("(2) -- subtrair\n");
    printf("(3) -- multiplicar\n");
    printf("(4) -- dividir\n");

    scanf("%d",&opcao);

    printf("Digite 2 valores\n");
    scanf("%f %f",&valor1, &valor2);
    if(opcao==1){
        somar();
    }
    if(opcao==2){
        subtrair();
    }
    if(opcao==3){
        multiplicar();
    }
    if(opcao==4){
        dividir();
    }
    return 0;
}
