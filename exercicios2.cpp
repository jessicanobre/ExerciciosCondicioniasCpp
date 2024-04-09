#include <iostream>

int main(){
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num > 0){
        printf("positivo.\n");
    } else {
        printf("negativo.\n");
    }

    return 0;
}