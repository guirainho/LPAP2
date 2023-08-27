#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dado;
    srand(time(NULL));
    int num = 1 + rand() % 100;
    int palpite;
    int tentativas = 0;
    printf("Tente adivinhar o número sorteado (entre 1 e 100).\n");
    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < 1 || palpite > 100) {
            printf("Palpite inválido. Digite um número entre 1 e 100.\n");
        } else if (palpite < num) {
            printf("Você chutou muito baixo! Tente novamente.\n");
        } else if (palpite > num) {
            printf("Você chutou muito alto! Tente novamente.\n");
        } else {
            printf("Parabéns!!! Você acertou em %d tentativas!\n", tentativas);
        }
    } while (palpite != num);

    return 0;
}
