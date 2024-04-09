#include <iostream>

int main(){
    float saldo = 1.500;
    float valor_retirada;

    printf("Digite a quantia que deseja retirar: ");
    scanf("%f", &valor_retirada);

    if(saldo >= valor_retirada) {
        printf("Você pode fazer uma retirada.\n");
    } else {
        printf("Saldo insufuciente. Seu saldo é de %.2f.\n", saldo);
    }

    return 0;
}