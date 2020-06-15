#include <stdio.h>
#include <stdlib.h>
union Pessoa{
    char cnpj[20];
    char cpf[14];
}pessoa;
int main()
{
    char numero;

    printf("escolher\n\t 1-PESSOA JURIDICA\n\t OU\n\t 2-PESSOA FISICA\n");
    scanf("%c",&numero);
    if(numero=='1'){
        printf("Informe seu CNPJ\n");
        scanf("%s",pessoa.cnpj);
        printf("Seu CNPJ eh: %s", pessoa.cnpj);
    }
    if(numero=='2'){
        printf("Informe seu CPF\n");
        scanf("%s",pessoa.cpf);
        printf("seu CPF eh: %s",pessoa.cnpj);
    }
    printf("\nTamanho da uniao: %li\n", sizeof(pessoa));
    return 0;
}
