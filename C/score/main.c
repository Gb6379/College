#include <stdio.h>
#include <stdlib.h>

int main()
{

int vetor[2],i,ordem,j;
    for(i=0; i<2; i++){
       printf("Digite a pontuacao do Player %d\n",i+1);
       scanf("%d",&vetor[i]);

    }

    printf("Ordenar por\n Player(1)\n Score(2)\n");
    scanf("%d",&ordem);
    if(ordem == 1){
        for(i=0; i<2; i++){
        printf("Player %d score %d\n",i+1,vetor[i]);
        }
    }
    if(ordem == 2){
        for(i=0; i<2; i++){
                for(j=0; j<2; j++){
            if(vetor[i] > vetor[j]){
                printf("Player %d Score %d\n",i+1,vetor[i]);


                }


            }

        }

    }

    return 0;
}
