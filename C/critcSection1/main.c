#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100000000

int num = 0;
int x = 0; // variável compartilhada entre as threads, inicializada com o valor 0 ou 1
count = 0;
void* contaIteracoes(void* nome){
	int aux, i, id;


        id = atoi(nome);
        printf("Thread %d\n", id);

        //Entrada na Seção crítica
        clock_t t;
        while (x != id){
             t = clock();
        }
        t = clock() - t;
        double time_taken = ((double)t)/CLOCKS_PER_SEC;//IN SECONDS
        printf("Took %f seconds to execute\n", time_taken);
	//Seção crítica
	for(i=0;i<N;i++)	{
		aux = num;
		aux = aux + 1;
		num = aux;

	}

        //Saída da Seção crítica
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
