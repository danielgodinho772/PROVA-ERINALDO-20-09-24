/*14. Escreva um programa que apresente um menu com as seguintes opções:
1. Adição.
2. Subtração.
3. Multiplicação.
4. Divisão.
5. Sair.
O programa deve solicitar dois números e realizar a operação escolhida. Deve
continuar exibindo o menu até que o usuário escolha a opção de sair. (0.2 ponto)
Entrada: escolha da operação e dois números.
Saída: resultado da operação.*/

#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        printf("\nMenu de Operacoes:\n");
        printf("1. Adicao\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {  
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
        }

        switch (opcao) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado da adicao: %.2f\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("Resultado da subtracao: %.2f\n", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("Resultado da multiplicacao: %.2f\n", resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado da divisao: %.2f\n", resultado);
                } else {
                    printf("Erro: Divisao por zero nao e permitida.\n");
                }
                break;
            case 5:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 5); 

    return 0;
}

