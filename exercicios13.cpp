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

    if (nota_aluno == 5.0){
        
    }
}