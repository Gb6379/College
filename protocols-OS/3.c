#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 100000000
int num = 0;
int x = 0; // vari�vel compartilhada entre as threads, inicializada com o valor 0 ou 1
bool flag[2] = {false,false};
void* contaIteracoes(void* nome){
	int aux, i, id;
    int other;

        id = atoi(nome);
        printf("Thread %d\n", id);

        //Entrada na Se��o cr�tica
        flag[i] == true;
        other = 1 - id;
        x = other;
        while ((flag[other] == true) && (x == other)){
             //espera
        }

	//Se��o cr�tica
	for(i=0;i<N;i++)	{
		aux = num;
		aux = aux + 1;
		num = aux;

	}

        //Sa�da da Se��o cr�tica
        flag[i] == false;
        x = 1 - id;

	pthread_exit(0);
}

int main(){
	int i;
	pthread_t thUm, thDois;

	pthread_create(&thUm, 0, contaIteracoes, "0");
	pthread_create(&thDois, 0, contaIteracoes, "1");

	pthread_join(thUm, NULL);
	pthread_join(thDois, NULL);

	if(num != 2*N)
		printf("**** ERRO na SOMA TOTAL das iteracoees dos Threads ****\nnum = %d\n", num);
	else
		printf("OK! SOMA FINAL CORRETA!!!\nnum = 2 * N = %d\n", num);
	printf("Fim do Thread Principal\n");

	pthread_join(thUm, 0);
	pthread_join(thDois, 0);
	return 0;

}
