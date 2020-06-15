#include <stdio.h>
#include <stdlib.h>

int main()
{int matriz[3][3],linha,coluna,aux;

    for(coluna=0;coluna<3;coluna++){
        printf("Digite a pontuacao do jogador %d\n",coluna+1);
        scanf("%d",&matriz[0][coluna]);//a linha esta fixa no zero pois a coluna é a pontuacao que estou armazenando

    }
    for(coluna=0; coluna<3; coluna++){
        printf("Jogador %d -- Score %d\n",coluna+1,matriz[0][coluna]);
    }
    //fazer aqui o processo de identificacao de valores maiores e menores no rank

    return 0;
}
