/*6. Escreva um programa que solicite dois números inteiros positivos ao usuário: um
valor inicial e um valor final. O programa deve então exibir todos os números primos
dentro desse intervalo. Se não houver números primos no intervalo, o programa
deve informar isso. (0.3 ponto)
Entrada: dois números inteiros positivos (inicial e final).
Saída: números primos no intervalo ou uma mensagem informando que não há
números primos.*/

#include <stdio.h>
#include <stdbool.h>

  bool ehprimo(int num) {
    if (num <= 1) return false;
    
    int i;
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int inicio, fim;
   
    printf("Digite o valor inicial: ");
    scanf("%d", &inicio);
    printf("Digite o valor final: ");
    scanf("%d", &fim);
    
    bool encontrouprimo = false;
    
    printf("Numeros primos no intervalo [%d, %d]:\n", inicio, fim);
    
    int i;
    for (i = inicio; i <= fim; i++) {
        if (ehprimo(i)) {
            printf("%d ", i);
            encontrouprimo = true;
        }
    }
    
    if (!encontrouprimo) {
        printf("Nao ha numeros primos no intervalo.\n");
    }
    
    return 0;
}

