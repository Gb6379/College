#include <stdio.h>
#include <stdlib.h>

int main()
{  int jogador[5],i,j,r[5],position,pontuacao,n[5];


    for(i=0; i<5; i++){
    printf("Digite a pontuacao do jogador %d\n", i+1);
    scanf("%d",&jogador[i]);

    }

    printf("Deseja exibir por\n Ordem de jogador(1)\n Ranking de pontuacao(2)\n");
    scanf("%d",&i);

    if(i==1){
        for(i=0;i<5;i++){
            printf("Jogador %d -- Pontuacao %d\n",i+1, jogador[i]);
        }

    }
    if(i==2){
        for(i=0;i<5;i++){
            pontuacao = -99999999;//colocar pontuacao em um numero baixo
            for(j=0;j<5;j++){
                    if(jogador[j] > pontuacao){
                        pontuacao=jogador[j];
                        position = j;
                    }
            }
        r[i]=pontuacao;//declaro um vetor e seto como pontuacao
        n[i]=position;//declaro outro vetor e seto como posicao
        jogador[position]=-99999999;
        }
        for(i=0;i<5;i++){
            printf("%do Lugar -- Jogador %d -- pontuacao %d\n ",i+1,n[i]+1,r[i]);//n[i] = posicao r[i] = pontuacao do ranking
        }
    }



    return 0;
}
