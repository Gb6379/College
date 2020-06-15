#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, numeros,valor1, valor2, valor3;

    printf("Digite 2 valores que a quantidade entre eles sera a de numeros aleatorios gerados\n");
    scanf("%d",&valor1);
    scanf("%d",&valor2);
    printf("Agora digite o valor que deseja sortir os numeros\n");
    scanf("%d",&valor3);

    for(i=valor1; i<=valor2; i++){
        numeros = rand() % valor3 + 1;

        printf("numeros %d\n", numeros);
    }

    return 0;
}
