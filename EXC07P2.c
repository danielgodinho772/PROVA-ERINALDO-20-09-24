/*7. Crie um programa que pe�a ao usu�rio para inserir as notas de 5 alunos. Para
cada aluno, o programa deve calcular a m�dia. Se a m�dia for maior ou igual a 7.0,
o aluno � aprovado; caso contr�rio, ele � reprovado. Ao final, o programa deve exibir
a m�dia de cada aluno e se ele foi aprovado ou reprovado. (0.3 ponto)
Entrada: 5 notas (uma por aluno).
Sa�da: m�dia de cada aluno e status de aprova��o.*/

#include <stdio.h>

 int main() {
 	float nota[5];
 	float soma = 0.0;
 	float media;
 	int i;
 	
 	for (i = 0; i <5; i++) {
 		printf("Informe a nota do aluno %d: ",i + 1);
 		scanf("%f",&nota[i]);
 	
	 media = nota[i];
	 
	 printf("Aluno %d - Media: %.2f - ", i + 1,media);
	 
	 if (media >= 7.0) {
	 	printf("Voce esta aprovado!\n ");
	 	} else {
	 		printf("Voce esta reprovado!\n ");
		 }
	 }
    return 0; 	
 }
