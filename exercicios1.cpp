#include <iostream>

int main(){
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("par.\n");
    } else{
        printf("ímpar.\n");
    }

    return 0;
}