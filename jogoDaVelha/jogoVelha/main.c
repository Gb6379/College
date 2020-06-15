#include <stdio.h>
#include <stdlib.h>
#include <windows.h>//biblioteca para fazer Keylogger(fazer o programa entender qual tecla do teclado esta sendo pressionada) usando GetAsyncKeyState(teclas);
//#include <time.h>
int matriz[3][3];
char O ='O', X ='X';
int aux=0,j,i;
int opcao,opcao2;
int linhaPc = 3, colunaPc = 3;// é igual a 3 pois entao ia sortear numero entre 3 na funcao pcjogada


void menu(){
    printf("\n\nJogo da Velha\n\n");
    printf("Escolha a modalidade\n");
    printf("(1) Jogador vs Jogador\n");
    printf("(2) Jogador vs PC\n");
    printf("(3) Jogador vs iPC\n");
    scanf("%d",&opcao);
    system("cls");
}

void zerarTabuleiro(){
    for(i=1; i<4; i++){
        for(j=1; j<4; j++){
            matriz[i][j] = 0;
        }
        printf("\n");
    }
}
void desenharTabuleiro(){
    printf("\n\nJOGO DA VELHA CLASSICO!\n\n\n");
    for(i=1; i<4; i++){
        printf("\t %c | %c | %c\n",matriz[i][1],matriz[i][2],matriz[i][3]);
    }
}

void  jogo1(){
    zerarTabuleiro();
    printf("Jogador vs Jogador\n");
    while(1){
            desenharTabuleiro();
            printf("\n\n\nLINHA DE 1 a 3 COLUNA 1 a 3\n");
            printf("Jogador 1: X  Jogador 2: O\n");
             printf("jogadas: %d",aux);
            if(aux%2==0){
                printf("\nJogador: 1 realize sua jogada\n LINHA: ");
            }
            else{
                printf("\nJogador: 2 realize sua jogada\n LINHA: ");
            }
            scanf("%d",&i);
            printf("COLUNA: ");
            scanf("%d",&j);
            system("cls");
            if(i>3 || j>3){
                printf("comando nao existe\n");
                aux--;
            }
            if(matriz[i][j]== 0){//se as posicoes da matriz estiverem vazias
                    if(aux%2==0){//e se a jogada for par
                        matriz[i][j]= X;//imprime x
                    }
                    else{
                        matriz[i][j]= O;//se nao imprime o
                    }
                    aux++;//variavel auxilia para ajudar a contar as jogadas e verficar o empate
            }
            if((matriz[1][1]==O && matriz[1][2]==O && matriz[1][3]==O)||
                (matriz[2][1]==O && matriz[2][2]==O && matriz[2][3]==O)||
                (matriz[3][1]==O && matriz[3][2]==O && matriz[3][3]==O)||
                (matriz[1][1]==O && matriz[2][1]==O && matriz[3][1]==O)||
                (matriz[1][2]==O && matriz[2][2]==O && matriz[3][2]==O)||
                (matriz[1][3]==O && matriz[2][3]==O && matriz[3][3]==O)||
                (matriz[1][1]==O && matriz[2][2]==O && matriz[3][3]==O)||
                (matriz[1][3]==O && matriz[2][2]==O && matriz[3][1]==O)){
                desenharTabuleiro();
                printf("\njOGADOR 2 VENCEU!!!\n");
                system("pause");//tranformar em funcao de verificacao
                break;
        }
        if((matriz[1][1]==X && matriz[1][2]==X && matriz[1][3]==X)||
                (matriz[2][1]==X && matriz[2][2]==X && matriz[2][3]==X)||
                (matriz[3][1]==X && matriz[3][2]==X && matriz[3][3]==X)||
                (matriz[1][1]==X && matriz[2][1]==X && matriz[3][1]==X)||
                (matriz[1][2]==X && matriz[2][2]==X && matriz[3][2]==X)||
                (matriz[1][3]==X && matriz[2][3]==X && matriz[3][3]==X)||
                (matriz[1][1]==X && matriz[2][2]==X && matriz[3][3]==X)||
                (matriz[1][3]==X && matriz[2][2]==X && matriz[3][1]==X)){
                desenharTabuleiro();
                printf("\nJOGADOR 1 VENCEU!!!\n");
                system("pause");
                break;
        }
        if(aux==9){
            desenharTabuleiro();
            printf("PARTIDA EMPATADA\n");
            system("pause");
            break;
        }
    }
}

int pcJogada(){
    srand(time(NULL));
    linhaPc = (rand()%3) + 1;//numeros aleatorios
    colunaPc = (rand()%3) + 1;//numeros aleatorios
    printf("%d\n",linhaPc);
    printf("%d\n",colunaPc);
    matriz[i][j] = matriz[linhaPc][colunaPc];

}
void jogo2(){
    zerarTabuleiro();
    printf("Jogador vs PC\n");
    while(1){
        desenharTabuleiro();
        printf("\n\n\nLINHA DE 1 a 3 COLUNA 1 a 3\n");
        printf("Jogador 1: X  Computador: O\n");
        printf("jogadas: %d",aux);
        if(aux%2==0){
                printf("\nJogador: 1 realize sua jogada\n LINHA: ");
                scanf("%d",&i);
                printf("COLUNA: ");
                scanf("%d",&j);
         }
         else{
            printf("Jogada Computador\n");
            pcJogada();
        }
        system("cls");
        if(matriz[i][j] == 0){
                if(aux%2==0){
                    matriz[i][j]= X;
                }
                else{
                    matriz[linhaPc][colunaPc] = O;
                }
                aux++;
        }
        if((matriz[1][1]==X && matriz[1][2]==X && matriz[1][3]==X)||
                (matriz[2][1]==X && matriz[2][2]==X && matriz[2][3]==X)||
                (matriz[3][1]==X && matriz[3][2]==X && matriz[3][3]==X)||
                (matriz[1][1]==X && matriz[2][1]==X && matriz[3][1]==X)||
                (matriz[1][2]==X && matriz[2][2]==X && matriz[3][2]==X)||
                (matriz[1][3]==X && matriz[2][3]==X && matriz[3][3]==X)||
                (matriz[1][1]==X && matriz[2][2]==X && matriz[3][3]==X)||
                (matriz[1][3]==X && matriz[2][2]==X && matriz[3][1]==X)){
                desenharTabuleiro();
                printf("\nJOGADOR 1 VENCEU!!!\n");
                system("pause");
                break;
        }
        if((matriz[1][1]==O && matriz[1][2]==O && matriz[1][3]==O)||
                (matriz[2][1]==O && matriz[2][2]==O && matriz[2][3]==O)||
                (matriz[3][1]==O && matriz[3][2]==O && matriz[3][3]==O)||
                (matriz[1][1]==O && matriz[2][1]==O && matriz[3][1]==O)||
                (matriz[1][2]==O && matriz[2][2]==O && matriz[3][2]==O)||
                (matriz[1][3]==O && matriz[2][3]==O && matriz[3][3]==O)||
                (matriz[1][1]==O && matriz[2][2]==O && matriz[3][3]==O)||
                (matriz[1][3]==O && matriz[2][2]==O && matriz[3][1]==O)){
                desenharTabuleiro();
                printf("\nCOMPUTADOR VENCEU!!!\n");
                system("pause");//tranformar em funcao de verificacao
                break;
        }
        if(aux==9){
            desenharTabuleiro();
            printf("PARTIDA EMPATADA\n");
            system("pause");
            break;
        }
    }
}
void mapeamento(){
    if((matriz[2][2] == 0) && (aux == 1)){//segmento da primeila arvore de possibilidades onde o jogador nao escolhe o meio como primeira opcao
        matriz[2][2] = O;

    }
    if((matriz[1][2] == X) && (matriz[1][1] == X) && (aux == 3)){//so vai marcar se o X for ganhar lado esquerdo linha 1
        matriz[1][3] = O;
    }
    if((matriz[1][2] == X) && (matriz[1][3] == X) && (aux == 3)){//so vai marcar se o X for ganhar lado esquerdo linha 1
        matriz[1][1] = O;
    }
    if((matriz[1][3] == X) && (matriz[1][1] == X) && (aux == 3)){//so vai marcar se o X for ganhar lado esquerdo linha 1
        matriz[1][2] = O;
    }
    if((matriz[2][1] == X) && (matriz[1][1] == X) && (aux == 3)){//so vai marcar se o X for ganhar lado esquerdo coluna 1
        matriz[3][1] = O;
    }
    if((matriz[3][1] == X) && (matriz[1][1] == X) && (aux == 3)){//so vai marcar se o X for ganhar lado esquerdo coluna 1
        matriz[2][1] = O;
    }
    if((matriz[3][1] == X) && (matriz[2][1] == X) && (aux == 3)){//so vai marcar se o X lado esquerdo coluna 1
        matriz[1][1] = O;
    }
    if((matriz[2][3] == X) && (matriz[1][3] == X) && (aux == 3)){//so vai marcar se o X for ganhar lado direito coluna 3
        matriz[3][3] = O;
    }
    if((matriz[3][3] == X) && (matriz[1][3] == X) && (aux == 3)){//so vai marcar se o X for ganhar lado direito coluna 3
        matriz[2][3] = O;
    }
    if((matriz[3][3] == X) && (matriz[2][3] == X) && (aux == 3)){//so vai marcar se o X for ganhar lado direito coluna 3
        matriz[1][3] = O;
    }
    if((matriz[3][3] == X) && (matriz[3][1] == X) && (aux == 3)){//so vai marcar se o X for ganhar lado direito linha 3
        matriz[3][2] = O;
    }
    if((matriz[3][3] == X) && (matriz[3][2] == X) && (aux == 3)){//so vai marcar se o X for ganhar lado direito linha 3
        matriz[3][1] = O;
    }
    if((matriz[3][1] == X) && (matriz[3][2] == X) && (aux == 3)){//so vai marcar se o X for ganhar lado direito linha 3
        matriz[3][3] = O;
    }
    if((matriz[2][2] == O) && (matriz[2][3] == X) && (aux == 3)){//PUNE QUANDO JOGADOR JOGA MAL
        if((matriz[3][3] != X) && (matriz[1][3] != X) && (matriz[1][2] == 0)){
            matriz[3][3] = O;
        }//se nao vai marcar normal pra o player nao gnahar na coluna 3
        if(matriz[1][2] == X){
            matriz[1][3] = O;
        }
    }
    if((matriz[2][2] == O) && (matriz[2][1] == X) && (aux == 3)){//PUNE QUANDO JOGADOR JOGA MAL
        if((matriz[3][1] != X) && (matriz[1][1] != X) && (matriz[3][2] == 0)){
            matriz[3][1] = O;
        }//se nao marca normal na coluna 1 pro player nao gnahar
        if(matriz[3][2] == X){
            matriz[1][3] = O;
        }
    }
    if((matriz[1][1] == X) && (matriz[3][3] == X) && (aux == 3)){//PUNE QUANDO JOGADOR JOGA MAL diagonal 1
        matriz[2][1] = O;


    }
    if((matriz[1][3] == X) && (matriz[3][1] == X) && (aux == 3)){//PUNE QUANDO JOGADOR JOGA MAL diagonal 2
        matriz[2][3] = O;

    }
    if((matriz[1][2] == X) && (matriz[3][3] == X) && (aux == 3)){
        matriz[2][1] = O;
    }
    if((matriz[3][2] == X) && (matriz[1][3] == X) && (aux == 3)){
        matriz[2][1] = O;
    }
    if((matriz[3][2] == X) && (matriz[1][2] == X) && (aux == 3)){
        matriz[1][1] = O;
    }

    if((matriz[2][1] == O) && (matriz[2][2] == O) && (aux == 5)){//chace de vitoria pelo linha 2
        if(matriz[2][3] == X){
            matriz[1][2] = O;
        }
        else{
            matriz[2][3] = O;//pode ganhar aqui
        }
    }
    if((matriz[2][3] == O) && (matriz[2][2] == O) && (aux == 5)){//chance de vitoria pela linha 2
        if((matriz[2][1] == X){
            matriz[1][2] = O;
        }
        else{
            matriz[2][1] = O;//pode ganhar aqui
        }
    }
    if((matriz[1][2] == O) && (matriz[2][2] == O) && (aux == 5)){//chance de vitoria coluna 2
        if(matriz[3][2] == X){
            matriz[2][3] = O;
        }
        else{
            matriz[3][2] = O;//pode ganhar aqui
        }
    }
    if((matriz[3][2] == O) && (matriz[2][2] == O) && (aux == 5)){//chance de vitoria coluna 2
        if(matriz[1][2] == X){
            matriz[2][1] = O;
        }
        else{
            matriz[1][2] = O;//pode ganhar aqui
        }
    }
    if((matriz[1][3] == O) && (matriz[2][2] == O) && (aux == 5)){//chance de vitoria diagonal 1
        if(matriz[3][1] == X){
            matriz[2][1] = O;
        }
        else{
            matriz[3][1] = O;//pode ganhar aqui
        }
    }
    if((matriz[1][1] == O) && (matriz[2][2] == O) && (aux == 5)){//chance de vitoria diagonal 2
        if(matriz[3][3] == X){
            matriz[2][3] = O;
        }
        else{
            matriz[3][3] = O;//pode ganhar aqui
        }
    }
     if((matriz[3][3] == O) && (matriz[2][2] == O) && (aux == 5)){//chance de vitoria diagonal 3
        if(matriz[1][1] == X){
            matriz[2][1] = O;
        }
        else{
            matriz[1][1] = O;//pode ganhar aqui
        }
    }
    if((matriz[3][1] == O) && (matriz[2][2] == O) && (aux == 5)){//chance de vitoria diagonal 4
        if(matriz[1][3] == X){
            matriz[2][3] = O;
        }
        else{
            matriz[1][3] = O;//pode ganhar aqui
        }
    }
    if((matriz[2][1] == O) && (matriz[2][2] == O) && (aux == 7)){//chace de vitoria pelo linha 2
        if(matriz[2][3] == X){
           if((matriz[3][3] == 0)){
                matriz[3][3] = O;
           }
           if((matriz[3][3] == X)){
                matriz[1][1] = O;
           }
        }
        else{
            matriz[2][3] = O;//pode ganhar aqui
        }
    }
    if((matriz[2][3] == O) && (matriz[2][2] == O) && (aux == 7)){//chace de vitoria pelo linha 2
        if(matriz[2][3] == X){
            matriz[3][1] = O;
        }
        else{
            matriz[2][1] = O;//pode ganhar aqui
        }
    }
    //fim da primeira arvore ate a jogada 4 fazer o resto de desenvolvimento entra a arvore 1 e 2
    if((matriz[2][2] == X) && (matriz[i][j] == 0) && (aux == 1)){//parte da segunda arvore onde o jogodar escolha o meio como primeira opcao
        pcJogada();
        matriz[linhaPc][colunaPc] = O;

    }
    if((matriz[2][2] == X) && (matriz[1][1] == X) && (aux == 3)){//impede a vitora na diagonal 1
        if(matriz[3][3] == O){
            matriz[1][3] = O;
        }
        matriz[3][3] = O;
    }
    if((matriz[2][2] == X) && (matriz[1][3] == X) && (aux == 3)){//impede a vitora na diagonal 2
        if(matriz[3][1] == O){
            matriz[1][1] = O;
        }
        matriz[3][1] = O;
    }
    if((matriz[2][2] == X) && (matriz[3][3] == X) && (aux == 3)){//impede a vitora na diagonal 3
        if(matriz[1][1] == O){
            matriz[3][1] = O;
        }
        matriz[1][1] = O;
    }
    if((matriz[2][2] == X) && (matriz[3][1] == X) && (aux == 3)){//impede a vitora na diagonal 3
        if(matriz[1][3] == O){
            matriz[3][3] = O;
        }
        matriz[1][3] = O;
    }
    if((matriz[2][2] == X) && (matriz[1][2] == X) && (aux == 3)){//impede vitoria no meio 1
        if(matriz[3][2] == O){//pune o jogador se ele joga mal
            matriz[3][3] = O;
        }
        matriz[3][2] = O;
    }
    if((matriz[2][2] == X) && (matriz[3][2] == X) && (aux == 3)){//impede vitoria no meio 2
        if(matriz[3][2] == O){//pune o jogador se ele joga mal
            matriz[1][3] = O;
        }
        matriz[1][2] = O;
    }
    if((matriz[2][2] == X) && (matriz[2][1] == X) && (aux == 3)){//impede vitoria na lateral 1
        if(matriz[2][3] == O){//pune o jogador se ele joga mal
            matriz[3][3] = O;
        }
        matriz[2][3] = O;
    }
    if((matriz[2][2] == X) && (matriz[2][3] == X) && (aux == 3)){//impede vitoria na lateral 2
        if(matriz[2][1] == O){//pune o jogador se ele joga mal
            matriz[3][1] = O;
        }
        matriz[2][1] = O;
    }
    /*if((matriz[3][1] == X) && (matriz[2][1] != X) && (aux == 3)){
        matriz[2][1] = O;
    }
    if((matriz[3][3] == X) && (matriz[2][3] != X) && (aux == 3)){
        matriz[2][3] = O;
    }
    /*if((matriz[3][1] == X) && (matriz[2][1] != X) && (aux == 5)){
        matriz[2][1] = O;
    }
    else if((matriz[3][1] != X) && (matriz[1][3] == O) && (aux == 5)){//uma possivilidade de vitoria da ia
        matriz[3][1] = O;

    }
    if((matriz[2][1] == O) && (matriz[2][2] == O) && (aux==5)){
        matriz[2][3] = O;
    }///esse nao
    if((matriz[2][3] == X) && (matriz[3][2] != X) && (aux == 5)){
        matriz[3][2] = O;
    }
    else if((matriz[2][3] != X) && (aux == 5)){
        matriz[2][3] = O;
    }
    if((matriz[2][3] == X) && (matriz[3][3] != X) && (aux == 7)){
        matriz[3][3] = O;
    }//se chegar ate aqui nessa sequencia empata
    else if((matriz[2][3] != X) && (aux == 7)){//uma possivilidade de vitoria da ia
        matriz[2][3] = O;
    }*/

}
void jogo3(){
    zerarTabuleiro();
    printf("Jogador vs iPC\n");
    while(1){
        desenharTabuleiro();
        printf("\n\n\nLINHA DE 1 a 3 COLUNA 1 a 3\n");
        printf("Jogador 1: X  IA: O\n");
        printf("jogadas: %d",aux);
        if(aux%2==0){
                printf("\nJogador: 1 realize sua jogada\n LINHA: ");//Depois mudar para que o pc comece jogando ou o player esoclha, dai eh so mudar se aux%2==0 mapeamento
                scanf("%d",&i);
                printf("COLUNA: ");
                scanf("%d",&j);
        }
         //system("cls");
        if(matriz[i][j] == 0){
                if(aux%2 == 0){
                    matriz[i][j]= X;


                }
                else{
                    mapeamento();
                }
                aux++;
        }
    }
}
//fazer o jogo 3 ultilizar mapeando de jogadas
//fazer 2 placares primero placar1 com jogador 1 e jogador 2
//placar 2 com jogador e computador colocar a funcao placar dentro do fi de cada jogo


int main()
{
    system("color B");
    menu();
    while(opcao2!=2){
        if(opcao==1){
            jogo1();
        }
        if(opcao==2){
            jogo2();
        }
        if(opcao==3){
            jogo3();
        }
        printf("(1)Voltar ao Menu (2)Sair\n");//faze a opcao de continuar o jogo a de sair ja esta pronta
        scanf("%d",&opcao2);
        system("cls");
        if(opcao2==1){
            menu();
            aux=0;
        }
    }
    return 0;
}

//converter inteiro para caracter
//int i=1;
//char c;
//c = i+ 0;
