#include <stdio.h>

int main() {
    int numero, somaDivisores = 0;

    printf("Escreva um número inteiro: ");
    scanf("%d", &numero);
    for (int divisor = 1; divisor <= numero / 2; divisor++) {
        if (numero % divisor == 0) {
            somaDivisores += divisor;
        }
    }
    if (somaDivisores == numero) {
        printf("%d é um número inteiro perfeito.\n", numero);
    } else {
        printf("%d NÃO é um número inteiro perfeito.\n", numero);
    }

    return 0;
}
