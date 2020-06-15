#include <stdio.h>
#include <stdlib.h>

struct Music{
    char name[20];
    int year;
    char artist[25];
}music[2];


int main()
{
    int i;
    int numeroCadastro;
    printf("Informe quantas musicas deseja cadastras\n");
    scanf("%d",&numeroCadastro);

    for(i=0; i<numeroCadastro; i++){
    printf("Digite o nome da %do musica:\n",i+1);
    scanf("%s",music[i].name);
    printf("Digite o artista da %do\n",i+1);
    scanf("%s",music[i].artist);
    printf("Digite o ano de lancamento\n");
    scanf("%d",&music[i].year);

    }
    for(i=0; i<numeroCadastro; i++){
        printf("\n%d-Musica: %s\n Artista: %s\n Ano: %d\n",i+1,music[i].name,music[i].artist,music[i].year);
    }
    system("pause");
    return 0;
}
