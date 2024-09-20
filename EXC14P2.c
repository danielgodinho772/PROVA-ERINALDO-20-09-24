/*14. Escreva um programa que apresente um menu com as seguintes op��es:
1. Adi��o.
2. Subtra��o.
3. Multiplica��o.
4. Divis�o.
5. Sair.
O programa deve solicitar dois n�meros e realizar a opera��o escolhida. Deve
continuar exibindo o menu at� que o usu�rio escolha a op��o de sair. (0.2 ponto)
Entrada: escolha da opera��o e dois n�meros.
Sa�da: resultado da opera��o.*/

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

