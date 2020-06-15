#include <stdio.h>
#include <stdlib.h>

int matriz[2][5];
int linha ,coluna ;
int i =0 ,j = 0 ;
int op;

void exibirPlacar(){

    for(linha=0; linha<2; linha++){
        printf("\n\n\nPlayer %d\t",linha);
        for(coluna=0; coluna<5; coluna++){
            printf("%d\t",matriz[linha][coluna]);
        }

        printf("\n");
    }
}

void pontuar(){

    printf("Digite para qual jogador pontuar\n");
    scanf("%d",&op);
    if(op==1){

        system("cls");
        matriz[i][j] = matriz[i][j]+15;
        if(matriz[i][j]==60){
            j++;
            if(matriz[i][4]==60){
                exibirPlacar();
                system("pause");
                exit(0);

            }
        }


    }
    else if(op==2){
        system("cls");
        matriz[1][j] = matriz[1][j]+15;
        if(matriz[1][j]==60){
        j++;
        }
    }

}


int main() {

  for(;;){
    exibirPlacar();
    pontuar();

  }


}
