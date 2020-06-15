// Passagem de parâmetro e funções
#include <stdio.h>
#include <stdlib.h>

void Incrementa (int n) {//variavel n aqui
    n = n+1;
    printf("\n\nValor de x dentro da função incrementa: %d\n",n);
}

void Decrementa(int *n) {// variavel n com o endereço da variavel x da memoria, no caso que esta declarado como 5.
    *n = *n-1;
    printf("\n\nValor de x dentro da função decrementa: %d\n",*n);
}

int main ( ) {
    int x=5;
    printf("Valor de X antes da função incrementa: %d\n",x);
    Incrementa(x);
    Decrementa(&x);
    //printf("\n\n");
    printf("Valor de X depois da função (por referência) decrementa: %d\n",x);
    return 0;
}
