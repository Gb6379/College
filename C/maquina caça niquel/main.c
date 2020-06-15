#include <stdio.h>
#include <stdlib.h>
struct Pessoa{
    int saldo;

}pessoa;

int main()
{
    printf("Digite o valor que deseja inserir como saldo\n");
    scanf("%d",&pessoa.saldo);
    system("cls");
    printf("Seu saldo agora eh de %d\n",pessoa.saldo);


    //inicializando o jogo e gerando os valores automaticos
    int i,numero;
    char* valor[] = {"laranja","cereja","banana","limao"};
    char* vetor[3] = {*valor};

    srand(time(NULL));

       while(pessoa.saldo>0){
        for(i=0; i<3; i++){
            numero = rand()%4;
            vetor[i] = valor[numero];
            printf("%s\t",vetor[i]);

            }
        }

    return 0;
}
