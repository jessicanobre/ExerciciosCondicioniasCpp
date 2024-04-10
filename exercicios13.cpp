#include <iostream>

int main(){
    float nota_aluno, nota_recuperacao, presenca;

    printf("Digite a nota do aluno na cadeira: ");
    scanf("%f", &nota_aluno);

    if(nota_aluno >= 7.0){
        printf("Aprovado.\n");
        return 0;
    }

    printf("Digite a nota da recuperação: ");
    scanf("%f", &nota_recuperacao);

    printf("Digite a presença do aluno: ");
    scanf("%f", &presenca);

    if (nota_aluno == 5.0)
        nota_recuperacao = 5.0;

        else if (nota_aluno == 6.0)
        nota_recuperacao = 4.0;

    float nota_final =  nota_aluno + (10 - nota_aluno);
     
     if (nota_final >= 10.0 && presenca >= 75.0) {
        printf("Aprovado.\n");
     } else {
        printf("Reprovado.\n");
     }

     return 0;
}