#include <stdio.h>
#include <stdlib.h>

char nome[20];
int menu1;

void exibirMensagem(){
    printf("Bem vindo ao jogo\n");
}
void solicitarNome(){
    printf("Informe o seu Nome\n");
    scanf("%s",nome);
}
void menu(){
    printf("Escolha um nievel -(1)Facil\t (2)Medio\t (3)Dificil\n");
    scanf("%d",&menu1);
    if(menu1 == 1){
        exibirPerfil();
        printf("Voce escolheu a dificuldade 1 -- Facil\n");
    }
    else if(menu1 == 2){
        exibirPerfil();
        printf("Voce escolheu a dificuldade 2 -- Medio\n");
    }
    else{
        exibirPerfil();
        printf("Voce escolheu a dificuldade 3 -- Dificil\n");
    }
}
void exibirPerfil(){
    printf("Nome : %s\n",nome);

}

int main()
{

   exibirMensagem();
   solicitarNome();
   menu();

    return 0;
}
