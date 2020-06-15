#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[10];
    int idade1;
    int idade2;
    int idade3;
}Pessoa;

void ler();
void calcular();

int main(){
    Pessoa pessoa;

    ler();
    calcular();

    system("pause");

}


void ler(){
    Pessoa pessoa;

    printf("Digite o seu nome\n");
    scanf("%s",pessoa.nome);
    fflush(stdin);
    printf("Digite \n");
    printf("ANOS\n");
    printf("MESES\n");
    printf("DIAS\n");
    printf("da sua idade\n");

    scanf("%d",&pessoa.idade1);

    scanf("%d",&pessoa.idade2);

    scanf("%d",&pessoa.idade3);

}
void calcular(){
    Pessoa pessoa;
    int calculo;


     printf("Voce tem %d dias de idade\n", (pessoa.idade1*360)+(pessoa.idade2*60) + pessoa.idade3);

}
