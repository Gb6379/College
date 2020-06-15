#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char nome[20];
    char dataNascimento[20];
    float notaAluno;
}Alunos;
int main()
{
    Alunos alunos[2];
    int percentual;
    float mediaTurma;
    int menu;
    int i;

    float alunosA;
    float alunosR;

    int contadorA = 0;
    int contadorR = 0;

    for(i=0; i<2; i++){
        printf("Iforme o nome do %do aluno  \n", i + 1);
        scanf("%s",alunos[i].nome);

        printf("Informe o ano de nascimento do %do aluno\n", i + 1);
        scanf("%s",alunos[i].dataNascimento);

        printf("Informe a nota do %do aluno\n", i + 1);
        scanf("%f",&alunos[i].notaAluno);
    }

    mediaTurma = (alunos[0].notaAluno + alunos[1].notaAluno + alunos[2].notaAluno + alunos[3].notaAluno + alunos[4].notaAluno + alunos[5].notaAluno + alunos[6].notaAluno
                  + alunos[7].notaAluno + alunos[8].notaAluno
                  + alunos[9].notaAluno
                  + alunos[10].notaAluno + alunos[11].notaAluno + alunos[12].notaAluno + alunos[13].notaAluno + alunos[14].notaAluno
                  + alunos[15].notaAluno + alunos[16].notaAluno + alunos[17].notaAluno + alunos[18].notaAluno + alunos[19].notaAluno + alunos[20].notaAluno)/2;


    printf("(1)-- Mostrar alunos aprovados e reprovados\n");
    printf("(2)-- Mostrar percentual de alunos aprovados e reprovados\n");
    printf("(3)-- Mostrar dados do estudante com maior nota\n");
    printf("(4)-- Mostrar nome dos alunos com a nota maior que a media\n");
    printf("(5)-- Listar os estudantes com a data de nascimento apos o ano 2000\n");
    printf("(6) -- Media da turma\n");
    scanf("%d",&menu);
    if(menu == 1){
        printf("APROVADOS\n");
        for(i=0; i<20; i++){
            if(alunos[i].notaAluno >= 7){
                printf(" %d -- Nome : %s   Nota: %.2f\n",contadorA + 1,alunos[i].nome, alunos[i].notaAluno);

            }

        }
        printf("REPROVADOS\n");
         for(i=0; i<20; i++){
            if(alunos[i].notaAluno < 7){
             printf(" %d -- Nome : %s   Nota: %.2f\n" ,contadorR + 1 ,alunos[i].nome, alunos[i].notaAluno);
            }

         }
    }
    else if(menu == 2){
        printf("PERCENTUAL DE ALUNOS APROVADOS E REPROVADOS\n");
        printf("Informe o numero de alunos Aprovados\n");
        scanf("%f",&alunosA);


        printf("%.2f %%",(alunosA*100)/2);


        }
    else if(menu == 3){
        printf("ALUNO(S) COM A MAIOR NOTA\n");
        for(i=0; i<20; i++){
            if(alunos[i].notaAluno >= mediaTurma){
                printf("Nome: %s\n",alunos[i].nome);
            }
        }

    }
    else if(menu == 6){
        printf("MEDIA DA TURMA\n");

        printf("%.2f\n",mediaTurma);

    }
   else if(menu == 4){

    printf("ALUNOS COM NOTA MAIOR QUE A MEDIA\n");
    for(i=0; i<20; i++){
        if(alunos[i].notaAluno > 7){
            printf("Nome: %s \n",alunos[i].nome);
            }
        }
   }
   else if(menu == 5){

    printf("ALUNOS QUE NASCERAM A PARTIR DE 2000\n");
        for(i=0; i<20; i++){
            if(alunos[i].dataNascimento >= 2000){
                printf("Nome : %s    Ano: %s\n", alunos[i].nome, alunos[i].dataNascimento);
                }
            }
        }




    return 0;
}
