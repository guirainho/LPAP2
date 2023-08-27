#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int numeroSorteado = 1 + rand() % 100;
    int palpite;

    printf("Bem-vindo ao jogo de adivinhação!\n");

    while (1) {
        printf("Digite o seu palpite (entre 1 e 100): ");
        scanf("%d", &palpite);

        if (palpite < 1 || palpite > 100) {
            printf("Valor inválido! Digite um palpite entre 1 e 100.\n");
            continue;
        }

        if (palpite == numeroSorteado) {
            printf("Parabéns!!! Você acertou!\n");
            break;
        } else if (palpite < numeroSorteado) {
            printf("Você chutou muito baixo! O valor correto é %d.\n", numeroSorteado);
        } else {
            printf("Você chutou muito alto! O valor correto é %d.\n", numeroSorteado);
        }
    }

    return 0;
}
