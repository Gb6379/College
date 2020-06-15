#include <stdio.h>
#include <stdlib.h>

int main()
{
   int matriz[2][3], linha, coluna;
    matriz[2][3] = 10;
    for(linha=0; linha<2; linha++){
        for(coluna=0; coluna<4; coluna++){
        coluna++;
        printf("%d\n",matriz[linha][coluna]);
        }

    }

    return 0;
}
