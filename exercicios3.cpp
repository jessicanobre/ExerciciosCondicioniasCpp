#include <iostream>

int main(){
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0){
        printf("É múltiplo por 3 e 5.\n");
    } else {
        printf("Não é mútiplo por 3 e 5.\n");
    }

    return 0;
}