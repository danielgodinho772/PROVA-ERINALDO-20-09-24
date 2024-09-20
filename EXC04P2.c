/*4. Escreva um programa que solicite ao usu�rio um n�mero decimal e um valor de
base de convers�o (entre 2 e 16). O programa deve converter o n�mero decimal
para a base desejada e exibir o resultado. Utilize um la�o para realizar a convers�o.
(0.1 ponto)
Entradas: n�mero decimal, base de convers�o.
Sa�da: n�mero convertido para a base escolhida*/

#include <stdio.h>

int main() {
    int decimal;
    int base;
    char resultado[50];
    int i = 0;

    printf("Digite um numero decimal: ");
    scanf("%d", &decimal);

    printf("Digite a base de conversao (entre 2 e 16): ");
    scanf("%d", &base);

    while (base < 2 || base > 16) {
        printf("Base invalida! Digite uma base entre 2 e 16: ");
        scanf("%d", &base);
    }

    while (decimal > 0) {
        int resto = decimal % base; 

        if (resto < 10) {
            resultado[i] = resto + '0';
        } else {
            resultado[i] = resto - 10 + 'A';
        }
        
        decimal = decimal / base;
        i++; 
    }

    printf("Numero convertido: ");
    
    int j;
    for (j = i - 1; j >= 0; j--) {
        printf("%c", resultado[j]);
    }
    printf("\n");

    return 0;
}


