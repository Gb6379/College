#include <stdio.h>
#include <stdlib.h>

struct Jogo{
    int copos[20];
    int moeda;
    int escolha;
}jogo;
int tentativas = 5;
int i;

void sortear (){
    srand(time(NULL));
    jogo.moeda = (rand() %20) + 1;
    //printf("%d\n", jogo.moeda); // printa em qual copo esta a moeda

}
void gerarJogo(){
    for(i=1; i<=20; i++){
        printf("copo : %d \t\t",i);

     }
}
void tentativa(){
    printf("\nDigite o numero do copo que esta a moeda\n");
    scanf("%d",&jogo.escolha);
    tentativas--;
    if(jogo.escolha < jogo.moeda){
       printf("\nERROU, a moeda esta mais a direita\n");
       printf("\nTentativas restantes %d\n", tentativas);
    }
    else if(jogo.escolha > jogo.moeda){
        printf("\nERROU, a moeda esta mais a esquerda\n");
       printf("\nTentativas restantes %d\n", tentativas);
    }
    else if(jogo.escolha == jogo.moeda){
        printf("\n\nParabéns Voce acertou!\n\n");
        tentativas = 0;
        exit(0);
    }
}

int main()
{
    sortear();
    while(tentativas>=1){
        gerarJogo();
        tentativa();
    }
    return 0;
}

