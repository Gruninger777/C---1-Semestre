#include <stdio.h>

int main() {
    int altura;
    char direcao;

    while (1) {
        printf("Digite a altura do triângulo (ou 0 para sair): ");
        scanf("%d", &altura);

        if (altura == 0) {
            break;
        }

        printf("Digite a direção (A para esquerda, D para direita, F para sair): ");
        scanf(" %c", &direcao);

        if (direcao == 'F' || direcao == 'f') {
            break;
        }

        if (direcao == 'A' || direcao == 'a') {
            for (int i = 1; i <= altura; i++) {
                for (int j = 1; j <= i; j++) {
                    printf("*");
                }
                printf("\n");
            }
        } else if (direcao == 'D' || direcao == 'd') {
            for (int i = 1; i <= altura; i++) {
                for (int j = 1; j <= altura - i; j++) {
                    printf(" ");
                }
                for (int j = 1; j <= i; j++) {
                    printf("*");
                }
                printf("\n");
            }
        } else {
            printf("Direção inválida. Use A ou D.\n");
        }
    }

    printf("Programa encerrado.\n");
    return 0;
}
