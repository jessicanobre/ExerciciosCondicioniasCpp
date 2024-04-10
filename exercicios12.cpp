#include <iostream>

int main(){
    float nota1, nota2, nota3, presenca;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a porcentagem de presença");
    scanf("%f", &presenca);

    media = (nota1 + nota2 + nota3) / 3;

    if (presenca == 100 && media >= 7){
        printf("Aprovado! Parabéns!.\n");
    } else if(presenca >= 75 && media >= 7){
        printf("Aprovado!.\n");
    } else if(presenca >= 75 && media >=5){
        printf("Recuperação!,\n");
    } else {
        printf("Reprovado!");
    }

    return 0;
}