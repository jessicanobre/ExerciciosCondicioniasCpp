#include <iostream>

int main(){
    float num1, num2;
    char operacao;
    
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Insira a operação (+, -, *, /): ");
    scanf("%c", &operacao);
    
    switch(operacao){
        case '+':
            printf("Resultado: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Resultado: %.2f\n", num1 - num2);
             break;
        case '*':
            printf("Resultado: %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0){
                printf("Resultado: %.2f\n", num1 / num2);
            }   else {
                printf("Não é possivel dividir por zero.\n");
            }
             break;
             default:
                printf("Opercação inválida.\n");
    }

    return 0;
}