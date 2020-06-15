#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main() {
	int bolasBrancas, bolasPretas, possibilidadesQuatro=0, possibilidadesCinco=0, possibilidadesSeis=0, possibilidadesSete=0;

	printf("Digite o numero de bolas brancas:\n");
	scanf("%d", &bolasBrancas);
	printf("Digite o numero de bolas pretas:\n");
	scanf("%d", &bolasPretas);
	if(bolasPretas+bolasBrancas<7){
        printf("\n MINIMO DE 7 BOLAS PARA FUNCIONAR\n");
        return 0;
	}
	if(bolasPretas<4){
		return 0;
	}
	if(bolasPretas==4){
		possibilidadesQuatro = ((bolasBrancas)*(bolasBrancas-1)*(bolasBrancas-2)/6)*((bolasPretas)*(bolasPretas-1)*(bolasPretas-2)*(bolasPretas-3)/24);
		printf(" POSSIBILIDADES: %d\n", possibilidadesQuatro);
	}
	if(bolasPretas==5){
        possibilidadesQuatro = ((bolasBrancas)*(bolasBrancas-1)*(bolasBrancas-2)/6)*((bolasPretas)*(bolasPretas-1)*(bolasPretas-2)*(bolasPretas-3)/24);
        possibilidadesCinco = ((bolasBrancas)*(bolasBrancas-1)/2)*((bolasPretas)*(bolasPretas-1)*(bolasPretas-2)*(bolasPretas-3)*(bolasPretas-4)/120);
        printf(" POSSIBILIDADES: %d\n", (possibilidadesQuatro+possibilidadesCinco));
	}
	if(bolasPretas==6){
        possibilidadesQuatro = ((bolasBrancas)*(bolasBrancas-1)*(bolasBrancas-2)/6)*((bolasPretas)*(bolasPretas-1)*(bolasPretas-2)*(bolasPretas-3)/24);
        possibilidadesCinco = ((bolasBrancas)*(bolasBrancas-1)/2)*((bolasPretas)*(bolasPretas-1)*(bolasPretas-2)*(bolasPretas-3)*(bolasPretas-4)/120);
        possibilidadesSeis = (bolasBrancas)*(((bolasPretas)*(bolasPretas-1)*(bolasPretas-2)*(bolasPretas-3)*(bolasPretas-4)*(bolasPretas-5))/720);
        printf("\nNUMERO DE POSSIBILIDADES: %d\n", (possibilidadesQuatro+possibilidadesCinco+possibilidadesSeis));
	}
	if(bolasPretas>6){
        possibilidadesQuatro = ((bolasBrancas)*(bolasBrancas-1)*(bolasBrancas-2)/6)*((bolasPretas)*(bolasPretas-1)*(bolasPretas-2)*(bolasPretas-3)/24);
        possibilidadesCinco = ((bolasBrancas)*(bolasBrancas-1)/2)*((bolasPretas)*(bolasPretas-1)*(bolasPretas-2)*(bolasPretas-3)*(bolasPretas-4)/120);
        possibilidadesSeis = (bolasBrancas)*(((bolasPretas)*(bolasPretas-1)*(bolasPretas-2)*(bolasPretas-3)*(bolasPretas-4)*(bolasPretas-5))/720);
        possibilidadesSete = (((bolasPretas)*(bolasPretas-1)*(bolasPretas-2)*(bolasPretas-3)*(bolasPretas-4)*(bolasPretas-5)*(bolasPretas-6)))/5040;
        printf("\nNUMERO DE POSSIBILIDADES: %d\n", (possibilidadesQuatro+possibilidadesCinco+possibilidadesSeis+possibilidadesSete));
	}


	system("pause");
	return 0;
}
