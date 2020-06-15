#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

struct Retangulo{
    int base;
    int altura;
}retangulo;

void exibirLarguraAltura(){
    printf("Base: %d Altura: %d\n",retangulo.base, retangulo.altura);
}
int calcularArea(int v1, int v2){
    return v1*v2;
}
float calcularMetadeDaArea(){
    return (retangulo.base*retangulo.altura)/2;
}
void finalizarProva(int matricula){

    printf("Prova finalizada com sucesso para a matricula: %d\n",matricula);
}
int main()
{
    printf("Digite a base do retangulo\n");
    scanf("%d",&retangulo.base);
    printf("Digite a altura do retangulo\n");
    scanf("%d",&retangulo.altura);
    exibirLarguraAltura();
    printf("A area do rentangulo eh: %d \n",calcularArea(retangulo.base,retangulo.altura));
    printf("A metade da area do rentangulo eh %.2f\n", calcularMetadeDaArea());
    finalizarProva(2017010505);

    system("pause");
    return 0;

}
