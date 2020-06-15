#include <stdio.h>
#include <stdlib.h>


int canibal = 3 ;
int missioneiro = 3;
int missioneiro2 = 0;
int canibal2 = 0;
int i;
int escolha1,escolha2,e3,e4;
int ladoEsquerdo = 6;
int ladoDireito = 0;
int barco=0;

void menu (){
    printf("\nLado Esquerdo = %d\t Barco = %d\t Lado Direito = %d",ladoEsquerdo,barco,ladoDireito);
    printf("\nMissioneiros = %d \t\t\t Missioneiros = %d\n",missioneiro,missioneiro2);
    printf("Canibais = %d \t\t\t\t Canibais = %d \n",canibal,canibal2);
}
void colocarBarco(){
    printf("\n\nDigite quem vc deseja colocar no barco\n\n(1)Canibal(2)Missioneiro|| OU (3)Passar alguem de volta ao barco\n");
    scanf("%d",&escolha1);
}
void passarLadoEsquerdo(){//tava mexendo aqui//ELE NAO TA ENTENDO QUE O BARCO>2 NAO PODE PORRA

        printf("\n\nDigite quem vc deseja passar para o lado esquerdo\n\n(1)Canibal(2)Missioneiro\n");
            scanf("%d",&escolha1);
            system("cls");
            if(escolha1==1){
                if( canibal==3){
                    printf("Nao existe canibais no barco\n");
                }
                else{
                    canibal++;
                    ladoEsquerdo++;
                    barco--;
                }
            }
            else if(escolha1==2){
                if( missioneiro==3){
                    printf("Nao existe Missioneiros no barco\n");
                }
                else{
                missioneiro++;
                ladoEsquerdo++;
                barco--;
                }

            }
            else{
                menu();
                system("cls");
            }

}
void passarLadoDireito(){
    //adicionar a opcao de volta do lado direito para o esquerdo( ter 2 caminhos para o usuario ao invese de so ir pra um) e ta pronto
    //fazer uma funcao para isso talvez


            printf("\n\nDigite quem vc deseja passar para o lado direito\n\n(1)Canibal(2)Missioneiro\n");
            scanf("%d",&escolha1);
            system("cls");
            if(escolha1==1){
                canibal2++;
                ladoDireito++;
                barco--;
                if(canibal==3){
                    printf("Nao existe canibais no barco\n");
                    ladoDireito--;
                    barco++;
                    canibal2--;
                }
            }
            else if(escolha1==2){
                missioneiro2++;
                ladoDireito++;
                barco--;
                if(missioneiro==3){
                    printf("Nao existe Missioneiros no barco\n");
                    ladoDireito--;
                    barco++;
                    missioneiro2--;
                }

                }

            else{
                menu();
                system("cls");
            }

}


void jogo(){
  while(ladoDireito!=6){
        //menu();
        //system("cls");
        if(barco==2 || ladoDireito==5){
                system("cls");
                menu();
                printf("\n\nEscolha o Lado que deseja passar\n\n");
                printf("\n(1)LadoDireito(2)LadoEsquerdo\n");
                scanf("%d",&e4);
                if(e4==1){
                passarLadoDireito();
                }
                else if(e4==2){
                    passarLadoEsquerdo();
                }
                    if(canibal>missioneiro && canibal2>missioneiro2){
                        printf("Os canibais comeram os missioneiros\tVoce Perdeu!");
                        exit(0);
                    }
                    else if(canibal2>=2 && missioneiro2==1){
                        printf("Os canibais comeram os missioneiros\tVoce Perdeu!");
                        exit(0);
                    }
                    else if(canibal2==3 && missioneiro2==3){
                        printf("Voce Venceu!");

                    }

                }
         //system("cls");
         menu();
        colocarBarco();
        system("cls");
        if(escolha1==1){
            if(canibal==0){
                printf("Voce nao tem mais canibais do lado esquerdo\n");
                canibal=0;
            }
            else{
            ladoEsquerdo--;
            barco++;
            canibal--;
            printf("\nFoi adicionado canibal ao barco\n");
            }
            //menu();
            if(barco>2){
                system("cls");
                printf("\nBarco nao carrega mais que 2\n");
                barco--;
                canibal++;
                ladoEsquerdo++;
            }
        }
        else if(escolha1==2){
            if(missioneiro==0){
                printf("Voce nao tem mais missioneiros do lado direito\n");
                missioneiro=0;
            }
            else{
                ladoEsquerdo--;
                barco++;
                missioneiro--;
                printf("\nFoi adicionado missioneiro ao barco\n");
            }
            if(barco>2){
                system("cls");
                printf("\nBarco nao carrega mais que 2\n");
                barco--;
                missioneiro++;
                ladoEsquerdo++;
            }

        }
        else if(escolha1==3){
            system("cls");
            //menu();
            if(canibal2>0 || missioneiro2>0){
                menu();
                printf("\n\nDigite quem voce deseja colocar de volta ao barco(1)Canibal(2)Missioneiro\n");
                scanf("%d",&e3);
                system("cls");
                if(e3==1){
                    if(barco>2){
                        printf("Barco nao carrega mais que 2\n");
                        canibal2++;
                        ladoDireito++;
                        barco--;
                    }
                    else if(canibal2==0){
                        printf("Numero de canibais do lado direito eh zero\n");
                        canibal2++;
                        barco--;
                        ladoDireito++;
                    }
                    canibal2--;
                    barco++;
                    ladoDireito--;
                }
                else if(e3==2){
                    if(barco>2){
                        printf("Barco nao carrega mais que 2\n");
                        missioneiro2++;
                        ladoDireito++;
                        barco--;
                    }
                    else if(missioneiro2==0){
                        printf("Numero de missioneiros do lado direito eh zero\n");
                        missioneiro2++;
                        barco--;
                        ladoDireito++;
                    }
                    missioneiro2--;
                    barco++;
                    ladoDireito--;
                }
            }
            else{
                printf("Nao existe ngm do lado direito ainda\n");
                system("pause");
                system("cls");
            }

            //system("cls");
        }
        else{
            printf("\t\tCOMANDO IVALIDO\n");
            system("pause");
            system("cls");
        }


    }

}


int main()
{
    jogo();
    return 0;
}
