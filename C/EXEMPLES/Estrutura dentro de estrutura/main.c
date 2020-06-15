#include <stdio.h>
#include <stdlib.h>
struct Endereco{
    char rua[30];
    char cidade[40];

};
struct Pessoa{
    char nome[40];
    int idade;
    struct Endereco endereco;
};
//A estruta que vai em cima é a que entrará dentro da outra..

int main(){
struct Pessoa pessoa;

//Endereco é estrutura e endereco é a variavel.
//no caso se o pessoa fosse substituido por p, no scan ficaria p.nome...

    printf("Digite o nome da pessoa:\n");
    scanf("%s",pessoa.nome);

    printf("Digite a cidade da pessoa\n");
    scanf("%s",pessoa.endereco.cidade);
//quando tiver um struc dentro do outro, se colocar o nome da primeira struct e da segunda para depois usar a variavel que esta dentro da segunda
    printf("Nome da Pessoa : %s\n ",pessoa.nome);
    printf("Cidade: %s\n",pessoa.endereco.cidade);
    return 0;
}
