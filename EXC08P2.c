/*8. Escreva um programa que sorteie um número entre 1 e 100 e permita ao usuário
tentar adivinhar o número. O programa deve dar dicas se o número sorteado é
maior ou menor que o palpite do usuário. O usuário tem no máximo 7 tentativas
para acertar. No final, informe se o usuário acertou ou não. (0.3 ponto)
Entrada: palpites do usuário.
Saída: dicas (maior/menor) e resultado final (acertou ou esgotou tentativas).*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secreto, palpite, tentativas = 7;
    int i;
    
    srand(time(0));
    secreto = rand() % 100 + 1;

    printf("Tente adivinhar o numero entre 1 e 100. Voce tem %d tentativas.\n", tentativas);

    for (i = 0; i < tentativas; i++) {
        printf("Tentativa %d: ", i + 1);
        scanf("%d", &palpite);

        if (palpite == secreto) {
            printf("Parabens! Voce acertou o numero %d em %d tentativas.\n", secreto, i + 1);
            return 0;
        } else if (palpite < secreto) {
            printf("O numero secreto e maior que %d.\n", palpite);
        } else {
            printf("O numero secreto e menor que %d.\n", palpite);
        }
    }

    printf("Voce esgotou suas tentativas. O numero secreto era %d.\n", secreto);
    return 0;
}

