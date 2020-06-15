#include <stdio.h>
#include <stdlib.h>

void preencher(int n, int **T) {

 system("color 02");
  int i,j;

  T[0][0] = 1;
  for (i = 1; i < n; i++) {
    T[i][0] = 1;
    T[i][i] = 1;
    for (j = 1; j < i; j++) {
      T[i][j] = T[i-1][j] + T[i-1][j-1];
    }
  }

  return;
}

// Funcao que recebe uma matriz "triangular"
// T com n linhas do Triangulo de Pascal e
// as imprime.

void imprimir(int n, int **T) {
    system("color 02");
  int i,j;

  for (i = 0; i < n; i++) {
    for (j = 0; j <= i; j++) {
      printf("%5d ", T[i][j]);
    }
    printf("\n");
  }

  return;
}

// Funcao principal.

int main() {
    system("color 02");
  int n,i,j,**T;

  printf("Qual eh seu n ? \n");
  scanf("%d", &n);

  T = (int **) malloc(n*sizeof(int *));
  if (T == NULL) {
    printf("Programa encerrado\n");
    return(-1);
  }


  for (i = 0; i < n; i++) {
    T[i] = (int *) malloc((i+1)*sizeof(int));

    if (T[i] == NULL) {
      printf("Programa encerrado\n");
      return(-1);
    }
  }

  if (n <= 0 || n >=10) {
        printf("programa encerrado");
    return(1);
  }

  preencher(n,T);
  imprimir(n,T);

  return(0);
}
