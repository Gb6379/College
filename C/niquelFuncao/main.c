#include <stdio.h>
#include <stdlib.h>

struct Jogo{
    int escolha;
    int creditos,creditos2;
}jogo;
    int vetor1[1];
    int vetor2[1];
    int vetor3[1];
    int i;
    int numero1 = 0,numero2 = 0,numero3 = 0;
    int jogada = 1;


void inserirCreditos(){

    printf("Digite o numero de creditos\n");
    scanf("%d",&jogo.creditos);
    system("cls");
    printf("NUMERO DE CREDITOS = %d\n",jogo.creditos);
    system("pause");
    system("cls");
}

void carregarJogo(){

    srand(time(NULL));

    printf("Jogada -- %d\n", jogada++);
    for(i=0; i<1; i++){
        vetor1[i] = 0;
        vetor2[i] = 0;
        vetor3[i] = 0;
    }
    for(i=0; i<1; i++){
        numero1 = rand()%4;
        vetor1[i] = vetor1[numero1];

        numero2 = rand()%4;
        vetor2[i] = vetor2[numero2];

        numero3 = rand()%4;
        vetor3[i] = vetor3[numero3];

        if(vetor1[numero1] == vetor2[numero2] && vetor1[numero1] == vetor3[numero3]){
            printf("\n%d\t %d\t %d\n",vetor1[numero1],vetor2[numero2],vetor3[numero3]);
            printf("\n---- VENCEU ----!\n\t");
            printf("\n  CREDITOS = %d\n",jogo.creditos);
                }
        else{
            printf("\n%d\t %d\t %d\n",vetor1[numero1],vetor2[numero2],vetor3[numero3]);
            jogo.creditos--;
            printf("\n---- PERDEU ---- !\n\t");
            printf("\n  CREDITOS = %d\n",jogo.creditos);


        }
    }
}

void verificacaoJogador(){
      printf("\nDeseja continuar jogando ? (1) Sim (2) Nao\n");
        scanf("%d",&jogo.escolha);
        system("cls");
        if(jogo.escolha == 1 && jogo.creditos == 0){
            printf("Voce nao tem mais CREDITOS\n");
            printf("\nDeseja Colocar mais ? (1) Sim (2) Nao\n");
            scanf("%d",&jogo.creditos2);
            system("cls");
            if(jogo.creditos2 == 1){
                printf("Digite quantos CREDITOS\n");
                scanf("%d",&jogo.creditos);
                system("pause");
                system("cls");
            }
            else if(jogo.creditos2 == 2){
                printf("FIM\n");
                exit(0);
            }

        }
        else if(jogo.escolha == 2){
            printf("FIM\n");
            exit(0);
        }
}

int main()
{
    inserirCreditos();
    while(jogo.creditos>0){
        carregarJogo();
        verificacaoJogador();
    }
    return 0;
}
