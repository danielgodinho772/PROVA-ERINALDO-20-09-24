/*12. Escreva um programa que solicite ao usu�rio 6 n�meros inteiros. Para cada
n�mero, verifique se ele � par ou �mpar. Se o n�mero for par, verifique se � maior
que 10 ou n�o. Se for �mpar, verifique se � menor que 50 ou n�o. (0.4 ponto)
Entrada: 6 n�meros inteiros.
Sa�da: paridade do n�mero e a classifica��o adicional.*/

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

