#include <iostream>

int main(){
    int quandidade_leads;

    printf("Digite o número de leads recebidos hoje: ");
    scanf("%d", &quandidade_leads);

    if (quandidade_leads <= 5) {
        printf("A quandidade de leads é baixa.\n");
    } else if(quandidade_leads >= 6 && quandidade_leads <= 10) {
        printf("A quantidade de leads é esperada.\n");
    } else {
        printf("A quantidade de leads é alta");
    }

    return 0;
}