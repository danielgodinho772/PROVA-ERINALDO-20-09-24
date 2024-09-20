/*10. Escreva um programa que peça ao usuário para inserir a idade de 10 pessoas.
Para cada idade, o programa deve classificar a pessoa em uma das categorias:
criança (0-12 anos), adolescente (13-17 anos), adulto (18-64 anos) ou idoso (65
anos ou mais). (0.4 ponto)
Entrada: 10 idades.
Saída: a classificação etária para cada idade.*/

#include <stdio.h>

int main() {
    int idade[10];
    int i;
    
    for (i = 0; i < 10; i++) {
        printf("Informe a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade[i]);
        
        if (idade[i] >= 0 && idade[i] <= 12) {
            printf("Pessoa %d - Crianca\n", i + 1); 
        } else if (idade[i] >= 13 && idade[i] <= 17) {
            printf("Pessoa %d - Adolescente\n", i + 1); 
        } else if (idade[i] >= 18 && idade[i] <= 64) {
            printf("Pessoa %d - Adulto\n", i + 1);
        } else if (idade[i] >= 65 && idade[i] <= 120) {
            printf("Pessoa %d - Idoso\n", i + 1);
        } else {
            printf("Idade invalida.\n"); 
        }
    }

    return 0;
}

