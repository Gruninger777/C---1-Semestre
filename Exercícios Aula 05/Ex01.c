#include <stdio.h>

int main (void) {
    
    int idade;
    
    printf("Digite sua idade:");
    scanf("%d", &idade);
    
    puts ( (idade >= 60) ? "Pode ser atendido" : "Não pode ser atendido");
    
    return 0;
}