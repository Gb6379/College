#include <stdio.h>
#include <stdlib.h>

int main() {
	int bolasBrancas, bolasPretas, possibilidadesQuatro=0, possibilidadesCinco=0, possibilidadesSeis=0, possibilidadesSete=0, possibilidadesTotal=0;
	printf("Digite o numero de bolas brancas:\n");
	scanf("%d", &bolasBrancas);
	printf("Digite o numero de bolas pretas:\n");
	scanf("%d", &bolasPretas);
	if(bolasPretas<4){
		return 0;
	}
	if(bolasPretas==4){
		possibilidadesQuatro = ((bolasBrancas)*(bolasBrancas-1)*(bolasBrancas-2)/6);
		printf("%d\n",(6*5)/2);
		printf("%d\n", possibilidadesQuatro);
	}
	return 0;
}
