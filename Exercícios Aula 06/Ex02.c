#include <stdio.h>

int main() {
   float nota, soma = 0.0;
   int contador = 0;

   printf("Digite as notas do aluno (digite -5 para calcular a média):\n");

   while (1) {
      printf("Digite a nota: ");
      scanf("%f", &nota);

      if (nota == -5) {
         break;
      }

      soma += nota;
      contador++;
   }

   if (contador > 0) {
      float media = soma / contador;
      printf("A média das notas é: %.2f\n", media);
   } else {
      printf("Nenhuma nota foi digitada.\n");
   }

    return 0;
}