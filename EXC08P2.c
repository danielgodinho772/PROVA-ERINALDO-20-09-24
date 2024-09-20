/*8. Escreva um programa que sorteie um n�mero entre 1 e 100 e permita ao usu�rio
tentar adivinhar o n�mero. O programa deve dar dicas se o n�mero sorteado �
maior ou menor que o palpite do usu�rio. O usu�rio tem no m�ximo 7 tentativas
para acertar. No final, informe se o usu�rio acertou ou n�o. (0.3 ponto)
Entrada: palpites do usu�rio.
Sa�da: dicas (maior/menor) e resultado final (acertou ou esgotou tentativas).*/

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

