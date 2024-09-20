/*11. Escreva um programa que peça ao usuário para inserir as notas de 8 alunos e
classifique cada nota em conceitos: A (nota entre 9 e 10), B (nota entre 7 e 8.9), C
(nota entre 5 e 6.9), D (nota entre 3 e 4.9) ou F (nota abaixo de 3). (0.4 ponto)
Entrada: 8 notas.
Saída: conceito correspondente para cada nota.*/

#include <stdio.h>

int main() {
    float notas[8];
    int i;

    for (i = 0; i < 8; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);

        if (notas[i] >= 9 && notas[i] <= 10) {
            printf("Aluno %d - Nota A\n", i + 1); 
        } else if (notas[i] >= 7 && notas[i] < 9) {
            printf("Aluno %d - Nota B\n", i + 1);  
        } else if (notas[i] >= 5 && notas[i] < 7) {
            printf("Aluno %d - Nota C\n", i + 1); 
        } else if (notas[i] >= 3 && notas[i] < 5) {
            printf("Aluno %d - Nota D\n", i + 1); 
        } else if (notas[i] < 3) {
            printf("Aluno %d - Nota F\n", i + 1); 
        } else {
            printf("Nota invalida. Digite uma nota entre 0 e 10.\n"); 
        }
    }

    return 0;
}

