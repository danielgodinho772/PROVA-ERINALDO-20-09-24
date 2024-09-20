/*12. Escreva um programa que solicite ao usuário 6 números inteiros. Para cada
número, verifique se ele é par ou ímpar. Se o número for par, verifique se é maior
que 10 ou não. Se for ímpar, verifique se é menor que 50 ou não. (0.4 ponto)
Entrada: 6 números inteiros.
Saída: paridade do número e a classificação adicional.*/

#include <stdio.h>

int main() {
    int num[6];
    int i;

    for (i = 0; i < 6; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num[i]);

        if (num[i] % 2 == 0) {
            printf("Numero %d e par", num[i]);

            if (num[i] > 10) {
                printf(" e maior que 10.\n");  
            } else {
                printf(" e maior que 10.\n");
            }

        } else {
            printf("Numero %d e impar",num[i]);

            if (num[i] < 50) {
                printf(" e menor que 50.\n"); 
            } else {
                printf(" e maior que 50.\n");
            }
        }
    }

    return 0;
}

