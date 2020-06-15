#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char nome[20];
    char cargo[20];
    float salario;
}Funcionarios;
int main()
{
    Funcionarios f[2];

    for(i=0; i<2; i++){
        printf("Digite o nome do funcionario que deseja cadastrar\n");
        scanf("%s",f[i].nome);

        printf("Digite o cargo do funcionario\n");
        scanf("%s",f[i].cargo);

        printf("Informe o salario\n");
        scanf("%f",&f[i].salario);
    }
    printf("Digite ")
    return 0;
}
