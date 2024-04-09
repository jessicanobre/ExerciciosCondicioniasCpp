#include <iostream>

int main(){
    double altura, peso;

    printf("Digite sua altura em metros: ");
    scanf("%1f", &altura);

    printf("Digite seu peso em quilogramas: ");
    scanf("%1f", &peso);

    double imc = peso / (altura * altura);

    printf("Seu IMC é: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Você está abaixo do peso.\n");
    } else if (imc < 25) {
        printf("Seu peso está normal.\n");
    } else if (imc < 30) {
        printf("Você está com sobrepeso.\n");
    } else if (imc < 35) {
        printf("Você está com obesidade de grau 1 (leve).\n");
    } else if (imc < 40) {
        printf("Você está com obesidade de grau 2 (moderada).\n");
    } else {
        printf("Você está com obesidade de grau 3 (grave).\n");
    }

    return 0;
}