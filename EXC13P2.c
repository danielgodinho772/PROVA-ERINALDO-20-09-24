/*13. Escreva um programa que apresente um menu com as seguintes op��es:
1. Converter de Celsius para Fahrenheit.
2. Converter de Fahrenheit para Celsius.
3. Sair.
O programa deve continuar exibindo o menu at� que o usu�rio escolha a op��o de
sair. (0.2 ponto)
Entrada: escolha da op��o e o valor da temperatura.
Sa�da: temperatura convertida.*/

#include <stdio.h>

int main() {
    int opcao;
    float celsius, fahrenheit;

    do {
        printf("\nMenu de Conversao de Temperatura:\n");
        printf("1. Converter de Celsius para Fahrenheit\n");
        printf("2. Converter de Fahrenheit para Celsius\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &celsius);
                fahrenheit = (celsius * 9 / 5) + 32; 
                printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);
                break;
            case 2:
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%f", &fahrenheit);
                celsius = (fahrenheit - 32) * 5 / 9;
                printf("Temperatura em Celsius: %.2f\n", celsius);
                break;
            case 3:
                printf("Encerrando...\n");
                break;
            default:
                printf("Op��o inv�lida. Tente novamente.\n");
        }

    } while (opcao != 3); 

    return 0;
}

