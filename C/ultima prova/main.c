#include <stdio.h>
#include <stdlib.h>
struct Funcionario{
    int codigo;
    float salario;
}funcionario1, funcionario2;

int matriz[2][4];
int linha,coluna;

int mesesTrabalhados(int anos){
    return anos * 12;
}

void adicionar(int *numero){
    *numero = *numero + 4;
}

void inserirValorMatriz(int valor){
    for(linha=0; linha<2; linha++){
        for(coluna=0; coluna<4; coluna++){
            matriz[linha][coluna]=valor;
            valor++;
        }

    }
}

void exibirMatriz(){
    for(linha=0; linha<2; linha++){
        for(coluna=0;coluna<4;coluna++){
            printf("%d\t",matriz[linha][coluna]);
            coluna++;
        }
        printf("\n");
        coluna=0;
    }
}

void lerArquivo(){
    FILE *arq;
    arq=fopen("pessoas.txt","r");
    char c;
    while(1){
        c=fgetc(arq);
        if(c=='4'){
            break;
        }
        else{
            printf("%c",c);
        }
    }
    printf("\n");
    fclose(arq);
}
int main()
{
    int numFuncionarios=40;
    int quantidadeProdutos=5;
    int *p;
    p = &quantidadeProdutos;
    *p = *p +2;
    funcionario1.codigo = 100;
    funcionario1.salario = 998.85;
    printf("Funcionario 1: codigo=%d, salario R$ %.1f\n",funcionario1.codigo,funcionario1.salario);
    printf("Funcionario 2: codigo=%d, salario R$ %.2f\n",funcionario2.codigo,funcionario2.salario);
    printf("Tempo de trabalho(em meses) do Funcionario 1: %d\n",mesesTrabalhados(3));
    adicionar(&numFuncionarios);
    printf("Numero de funcionarios da empresa %d\n",numFuncionarios);
    printf("Numero de produtos: %d\n",quantidadeProdutos);
    inserirValorMatriz(10);
    exibirMatriz();
    //lerArquivo();
    system("pause");
}
