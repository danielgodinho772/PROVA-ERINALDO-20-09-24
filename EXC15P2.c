/*15. Escreva um programa que apresente um menu com as seguintes op��es:
1. Gerar a tabuada de um n�mero.
2. Sair.
O programa deve solicitar ao usu�rio o n�mero desejado e exibir a tabuada (de 1 a
10). O menu deve continuar sendo exibido at� que o usu�rio escolha a op��o de
sair. (0.2 ponto)
Entrada: escolha da op��o e um n�mero.
Sa�da: tabuada do n�mero*/

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
            printf("Op��o invalida. Tente novamente.\n");
        }

    } while (opcao != 2); 
    return 0;
}

