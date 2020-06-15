#include <stdio.h>
#include <stdlib.h>

struct Tabuleiro{
    char campo[5][5];
    int dificuldade;
    int linha;
    int coluna;
}tabuleiro;

struct Jogada{
    int linha;
    int coluna;
    int chances;
    int pontos;
}jogada;



int main()
{
    int i, j;
    jogada.chances = 3;
    srand(time(NULL));
    printf("\n\nCAMPO MINADO\n\n--------------------------------\n");
    printf("Desenvolvido por Gabriel\n");
    system("pause");
    system("cls");
    printf("Escolha uma Dificuldade\n -- (1)Easy = 5 bombas\n -- (2)Hard = 15 bombas\n -- (3)Impossible = 24 bombas\n");
    scanf("%d",&i);
    system("cls");
    if(i == 1){
            tabuleiro.dificuldade=5;
            jogada.pontos=5;

    }
    else if(i == 2){
        tabuleiro.dificuldade=15;
        jogada.pontos=15;//começa com 15 quando chegar a 25, no caso de acertar as 10 casas sem minas
    }
    else if(i == 3){
        tabuleiro.dificuldade=24;
        jogada.pontos = 24;
    }

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            tabuleiro.campo[i][j] = 0;//zerar as posicoes da matriz;
        }
    }
    for(i=0; i<tabuleiro.dificuldade;){
         tabuleiro.linha = (rand()%5);
         tabuleiro.coluna = (rand()%5);
         if(tabuleiro.campo[tabuleiro.linha][tabuleiro.coluna] ==0){// se a posicao nao é zero setar comoo um, se nao continua o codigo
            tabuleiro.campo[tabuleiro.linha][tabuleiro.coluna] = 1;//mina é 1
            i++;//incrementa o i quando uma mina for setada// definida
            }
        }
    do{
        for(i=0; i<5; i++){
            for(j=0; j<5; j++){
                if(tabuleiro.campo[i][j] == 2){
                    printf("vazio\t");
                }
                else if(tabuleiro.campo[i][j] == 3){
                    printf("BOM\t");
                }
                else{
                    printf("#\t");
                }
            }
            printf("\n");
        }
        printf(" Voce tem %d Chances Restantes\n",jogada.chances);
        printf("Pontuacao %d(se chegar a 25 voce ganha :)\n",jogada.pontos);
        printf("Faca sua jogada\n Linha :");
        scanf("%d",&jogada.linha);
        printf("Coluna: ");
        scanf("%d",&jogada.coluna);
        jogada.linha--;
        jogada.coluna--;
        if(tabuleiro.campo[jogada.linha][jogada.coluna]==0){
            tabuleiro.campo[jogada.linha][jogada.coluna]=2;
            printf("\nUFA");
            jogada.pontos++;//aumenta pontos
            getch();

        }
        else if(tabuleiro.campo[jogada.linha][jogada.coluna]==1){
            tabuleiro.campo[jogada.linha][jogada.coluna]=3;//morto
            printf("\nPerdeu uma vida");
            jogada.chances--;
            getch();

        }
        else{
            printf("\nJogada Invalida");
            getch();
        }
        system("cls");
        }while((jogada.chances>0) &&(jogada.pontos<25));//se perder as vidas acaba se fizer todos os pontos ganha
        if(jogada.pontos==25){
            printf("Voce VENCEU !!!!");
        }
        if(jogada.chances == 0){
            printf("Voce perdeu todas as chances :(");

        }
        printf("Game Over\n");
        getch();
        return 0;

}








