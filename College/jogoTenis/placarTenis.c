#include <stdio.h>
#include <stdlib.h>

int matriz[2][5];
int linha ,coluna = 0;
int i = 1;
int op;

void exibirPlacar(){

    for(linha=0; linha<2; linha++){
        printf("\n\n\nPlayer %d\t",i);
        for(coluna=0; coluna<5; coluna++){
            printf("%d\t",matriz[linha][coluna]);
        }
        printf("\n");
    }
}

void pontuar(){

    printf("\n\nDigite (1) para pontuar para o player 1\n Digite (2) para pontuar para o player 2\n");
    scanf("%d",&op);
    if(op==1){
         system("cls");
        matriz[0][0] = matriz[0][0] + 15;
        for(linha=0; linha<2; linha++){
            for(coluna=0; coluna<5; coluna++) {
                printf("%d\t",matriz[linha][coluna]);

            }
            printf("\n");
        }
    }
    else if(op==2){
        system("cls");
        matriz[1][0] = matriz[1][0] + 15;
        for(linha=0; linha<2; linha++){
            for(coluna=0; coluna<5; coluna++){
                printf("%d\t",matriz[linha][coluna]);
                 if(matriz[coluna][0]==60){
                    printf("%d\t",matriz[linha][coluna]);
                    coluna++;
        }
            }
            printf("\n");
        }
    }

}




int main() {

    for(;;) {

    exibirPlacar();
    pontuar();

    }



}
