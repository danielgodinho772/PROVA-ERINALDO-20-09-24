/*9. Escreva um programa que peça ao usuário para inserir as notas de 5 alunos.
Para cada aluno, o programa deve calcular a média de duas provas. Se a média for
maior ou igual a 7.0, o aluno é aprovado. Se a média estiver entre 5.0 e 6.9, o aluno
vai para a recuperação, e se for menor que 5.0, o aluno é reprovado. (0.4 ponto)
Entrada: 10 notas (2 para cada aluno).
Saída: média de cada aluno e status (aprovado, recuperação ou reprovado).*/

#include <stdio.h>

int main() {
    float notas[5][2];
    float media;
    int i,j;
    
    for (i = 0; i < 5; i++) {
        printf("Digite as notas do aluno %d:\n", i + 1);
        for (j = 0; j < 2; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }
    
    for (i = 0; i < 5; i++) {
        media = (notas[i][0] + notas[i][1]) / 2;
        printf("Aluno %d - Media: %.2f - ", i + 1, media);
        
        if (media >= 7.0) {
            printf("Aprovado\n");
        } else if (media >= 5.0) {
            printf("Recuperacao\n");
        } else {
            printf("Reprovado\n");
        }
    }
    
    return 0;
}

