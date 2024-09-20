/*5. Escreva um programa que pe�a ao usu�rio para inserir 10 n�meros inteiros. O
programa deve contar quantos n�meros s�o pares e quantos s�o �mpares, e exibir
esses valores no final. (0.3 ponto)
Entrada: 10 n�meros inteiros.
Sa�da: quantidade de n�meros pares e �mpares.*/

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

