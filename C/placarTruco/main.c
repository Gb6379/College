#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i = 0;
    int j = 0;
    int ponto;

    while(i < 24 || j < 24){
        printf("ISMAEL GABRIEL %d\n", i);
        printf("EDUARDO LURIAN %d\n", j);
        printf("digite para pontuar:");
        scanf("%d",&ponto);
        if(ponto == 1){
            i++;
            system("cls");
        }
        if(ponto == 2){
            j++;
            system("cls");
        }
        else if(i == 24 || j == 24){
            system("cls");
            printf("Acabooooooooo !\n");
            system("pause");
            i = 0;
            j = 0;
        }
    }
        return 0;
}
