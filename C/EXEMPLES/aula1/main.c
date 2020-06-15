#include <stdio.h>
#include <stdlib.h>

struct game{
    char nome[30];
    int ano;
    float tamanho;
    char produtor[30];
    char genero[35];
    char plataforma[10];
}g1,g2;

int main(){
int i;

    for(i=0; i<5; i++){
    printf("Nome : \n");
    scanf("%s",g1.nome);

    printf("Ano : \n");
    scanf("%d",&g2.ano);

    printf("Tamanho : \n");
    scanf("%f",&g2.tamanho);

    printf("Produtor\n");
    scanf("%s",g1.produtor);

    printf("Genero :\n");
    scanf("%s",g1.genero);

    printf("Plataforma: \n");
    scanf("%s",g1.plataforma);

    system("cls");

    }

    for{
    printf("Nome : %s \t" "Ano: %d\t" "Tamanho: %.2fMB\n",g1.nome,g2.ano,g2.tamanho);
    printf("Produtor: %s\t" "Genero: %s\t"  "Plataforma: %s\t",g1.produtor,g1.genero,g1.plataforma);
    }
    return 0;
}
