/*5. Escreva um programa que peça ao usuário para inserir 10 números inteiros. O
programa deve contar quantos números são pares e quantos são ímpares, e exibir
esses valores no final. (0.3 ponto)
Entrada: 10 números inteiros.
Saída: quantidade de números pares e ímpares.*/

#include <stdio.h>

int main() {
    int numeros[10]; 
    int contagemPares = 0; 
    int contagemImpares = 0;

    printf("Digite 10 numeros inteiros:\n");
    
    int i;
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            contagemPares++;
        } else {
            contagemImpares++;
        }
    }

    printf("\nQuantidade de numeros pares: %d\n", contagemPares);
    printf("Quantidade de numeros Impares: %d\n", contagemImpares);

    return 0;
}

