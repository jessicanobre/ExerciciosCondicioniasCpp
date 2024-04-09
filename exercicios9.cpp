#include <iostream>

int main(){
    double x, y;
    
    printf("Digite as coordenadas (x, y) do ponto no plano cartesiano: ");
    scanf("%1f %1f", &x, &y);

    if (x > 0 && y > 0) {
        printf("O ponto está no primeiro quadrante.\n");
    } else if (x < 0 && y > 0) {
        printf("O ponto está no segundo quadrante.\n");
    } else if (x < 0 && y < 0) {
        printf("O ponto está no terceiro quadrante.\n");
    } else if (x > 0 && y < 0) {
        printf("O ponto está no quarto quadrante.\n");
    } else if (x == 0 && y != 0) {
        printf("O ponto está sobre o eixo y.\n");
    } else if (x != 0 && y == 0) {
        printf("O ponto está sobre o eixo x.\n");
    } else {
        printf("O ponto está na origem.\n");
    }

    return 0;
}