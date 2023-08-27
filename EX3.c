#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dado;
    srand(time(NULL));
    int num = 1 + rand() % 100; // Número sorteado no intervalo [1, 100]
    int palpite;
    int tentativas = 0; // Contador de tentativas

    printf("Tente adivinhar o número sorteado (entre 1 e 100).\n");

    while (tentativas < 5) {
        printf("Tentativa %d: Digite seu palpite: ", tentativas + 1);
        scanf("%d", &palpite);
        tentativas++; // Incrementa o contador a cada tentativa

        if (palpite < 1 || palpite > 100) {
            printf("Palpite inválido. Digite um número entre 1 e 100.\n");
            continue; // Pula o restante do loop e começa a próxima iteração
        } else if (palpite < num) {
            printf("Você chutou muito baixo! Tente novamente.\n");
        } else if (palpite > num) {
            printf("Você chutou muito alto! Tente novamente.\n");
        } else {
            printf("Parabéns!!! Você acertou em %d tentativas!\n", tentativas);
            return 0;
        }
    }

    // Se o usuário não acertou após 5 tentativas
    printf("Você excedeu o número máximo de tentativas. O número sorteado era: %d\n", num);
    return 0;
}
