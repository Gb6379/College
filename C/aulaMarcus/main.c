#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1,nota2,nota3;
	printf("digite nota1");
	scanf("%f",&nota1);
	printf("digite nota2");
	scanf("%f",&nota2);
	printf("digite nota3");
	scanf("%f",&nota3);
    media=(nota1+nota2+nota3)/3;
        if(media>=7){
            printf("APROVADO");}

        else{
            printf("Reprovado");
}
    getch();

    return 0;

}
