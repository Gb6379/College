#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <time.h>

char matriz[0][0];
int linha = 20;
int coluna = 20;


void board(){
    for(linha =0; linha<=20; linha++){
        for(coluna=0; coluna<=20; coluna++){
            printf("-", matriz[linha][coluna]);
        }
        printf("\n");
    }

}



int main()
{

   board();
    return 0;
}
