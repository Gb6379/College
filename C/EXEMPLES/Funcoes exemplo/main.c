#include <stdio.h>
#include <stdlib.h>


void exibirMensagem1(){
    printf("Bom Dia\n");
    printf("Bem vindo \n");
}
void exibirMensagem2(){
    printf("Boa Tarde\n");
    printf("Bem vindo\n");

}
void exibirMensagem3(){
    printf("Boa Noite\n");
    printf("Bem vindo\n");
}

int main()
{
    int opcao;
    printf("Digite o numero da msg que deseja viz 1,2 ou 3\n");
    scanf("%d",&opcao);

    switch(opcao){
        case 1:{
        exibirMensagem1();
        break;
    }
    case 2:{
        exibirMensagem2();
        break;
    }
    case 3:{
        exibirMensagem3();
        break;
        }
    }
    return 0;
}
