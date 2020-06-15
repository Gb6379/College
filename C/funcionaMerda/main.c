#include <stdio.h>
#include <stdlib.h>

struct Jogo{
    int resposta;
}jogo;

void lerArquivo(){
    FILE *file;
    file=fopen("pergunta1.qiz","r");//a base de dados deve estar dentro da pasta do executavel, se nao da erro
    char c;

    while(1){
        c=fgetc(file);
        if(c==EOF){
            break;
        }
        printf("%c",c);
    }
    printf("\n");
    fclose(file);
    //printf("Arquivo lido com sucesso\n");


}

int main()
{

    lerArquivo();
    printf("Escolha uma Alternativa\n");
    scanf("%d",&jogo.resposta);
    return 0;
}


