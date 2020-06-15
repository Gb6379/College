#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, xn, a, n,  c;

    printf("Digite 2 valores que a quantidade entre eles sera a de numeros aleatorios gerados: \n");
    scanf("%d",&a);
    scanf("%d",&n);
    printf("Agora digite o valor que deseja sortir os numeros: \n");
    scanf("%d",&c);

    for(i= a; i<= n; i++){
        xn = rand() % c + 1;

        printf("numeros %d\n", xn);
    }

    return 0;
}
