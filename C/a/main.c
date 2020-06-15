#include <stdio.h>
#include <stdlib.h>

int main()
{

int valor;
int valor1;
//operaçoes
int plus;
int minus;
int divisao;
int multiplicacao;
int menu;

printf ("digite o primeiro valor\n");
scanf("%d", &valor);

printf("digite o segundo valor\n");
scanf("%d", &valor1);
printf("esses sao os numeros:\n%d\t%d\n", valor, valor1);


printf("qual operacao deseja realizar?\n 1. adicao\n 2. subtracao\n 3. multiplicacao\n 4. divisao\n");
scanf("%d", &menu);
    if(menu==1){
        plus = valor+valor1;
        printf("a soma dos valores resulta em:\n%d\n", plus);
    }
    if(menu==2){
        minus = valor-valor1;
        printf("a subtracao resulta em:\n%d\n", minus);
    }
    if(menu==3){
        multiplicacao=valor*valor1;
        printf("a multiplicacao resulta em:\n%d\n", multiplicacao);
    }

    if(menu==4){
        divisao = valor/valor1;
        printf("a divisao resulta em:\n%d\n", divisao);
    }
    if(menu>4){
        printf("opcao inexistente");
    }
return 0;
}
