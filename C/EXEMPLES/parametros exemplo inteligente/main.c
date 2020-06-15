#include <stdio.h>
#include <stdlib.h>

void calcular ( int v1, int v2, char opcao);

int main(){
    int valor1, valor2;
    char op;

    printf("Digite o primeiro valor\n");
    scanf("%d",&valor1);

    printf("Digite o segundo valor\n");
    scanf("%d",&valor2);
    fflush(stdin);

    printf("Digite a opcao desejada para calculo: + - * / \n");
    scanf("%c",&op);
    fflush(stdin);
    calcular(valor1,valor2,op);

    return 0;
}
void calcular(int v1, int v2, char opcao){
    if(opcao == '+'){
        printf("Resultado da SOMA %d\n",v1 + v2);
    }
    else if(opcao == '-'){
        printf("Resuldado da SUBTRACAO %d\n", v1 - v2);
    }
    else if(opcao == '*'){
        printf("Resultado da MULTIPLICACAO %d\n",v1 * v2 );

    }
    else if(opcao == '/'){
        printf("Resultado da DIVISAO %d\n", v1/v2);
    }

}
