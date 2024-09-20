/*15. Escreva um programa que apresente um menu com as seguintes opções:
1. Gerar a tabuada de um número.
2. Sair.
O programa deve solicitar ao usuário o número desejado e exibir a tabuada (de 1 a
10). O menu deve continuar sendo exibido até que o usuário escolha a opção de
sair. (0.2 ponto)
Entrada: escolha da opção e um número.
Saída: tabuada do número*/

#include <stdio.h>

int main() {
    int opcao;
    int num;
    int i;

    do {
        printf("\nMenu:\n");
        printf("1. Fazer a tabuada de um numero\n");
        printf("2. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite o numero para gerar a tabuada: ");
            scanf("%d", &num);

            printf("Tabuada do %d:\n", num);
            for (i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", num, i, num * i);  
            }
        } else if (opcao == 2) {
            printf("Encerrando...\n");
        } else {
            printf("Opção invalida. Tente novamente.\n");
        }

    } while (opcao != 2); 
    return 0;
}

