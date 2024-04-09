#include <iostream>

int main(){
   char escolha;
   double temperatura;

   printf("Escolha a conversão desejada: ");
   printf("C para Celsius para Fahrenheit\n");
   printf("F para Fahrenheit para Celsius\n");
   scanf("%c", &escolha);

   if (escolha == 'C' || escolha == 'c') {
        printf("Digite a tempertura em Celsius: ");
        scanf("%1f", &temperatura);
        double fahrenheit = (temperatura * 1.8) * 32;
        printf("%.2f, Celsius equivale a %.2f Fahrenheit.\n", temperatura, fahrenheit);
   }  else if (escolha == 'F' || escolha == 'f') {
        printf("Digite a tempertura em Fahrenheit: ");
        scanf("%1f", &temperatura);
        double celsius = (temperatura - 32) / 1.8;
        printf("%.2f, Fahrenheit equivale a %.2f Celsius.\n", temperatura, celsius);
   }

   return 0;
}