#include <iostream>

int main() {
    float num1, num2;
    char opcao;

    
    printf("Insira o primeiro número: ");
    scanf("%f", &num1);

    printf("Insira o segundo número: ");
    scanf("%f", &num2);

    printf("Insira a operação matemática (+, -, *, /): ");
    scanf(" %c", &opcao);

    float resultado;
    switch (opcao) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Erro: divisão por zero!\n");
                return 1; 
            }
            break;
        default:
            printf("Operação inválida!\n");
            return 1; 
    }

    
    printf("Resultado: %.2f\n", resultado);

    return 0; 
}