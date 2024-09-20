/*3. Escreva um programa em C que solicite ao usuário as notas de 5 alunos e suas
respectivas pesos, calcule a média ponderada de cada aluno e ao final exiba a
média final da turma. (0.1 ponto)
Entradas: 5 pares de valores (nota e peso) para cada aluno.
Saída: a média ponderada de cada aluno e a média final da turma*/

#include <stdio.h>

int main() {
	
    int alunos;
	float nota, peso, media, soman, somap, final = 0;
	
		for (alunos = 1; alunos <= 5; alunos++){
		 soman = 0;
		 somap = 0;
		 
	        printf("Informe a nota do aluno %d? ",alunos);
	     	scanf("%f",&nota);
	    	printf("Informe o peso da nota do aluno %d? ",alunos);
	     	scanf("%f",&peso);
	     
	    	soman += nota * peso;
	    	somap += peso;
		
		if (somap != 0) {
		  media = soman / somap;
	    printf("\nO valor da media ponderada do aluno %d e = %.2f\n\n", alunos, media);	
}       else {
            printf("\nO peso total do aluno %d e zero, media invalida\n\n", alunos);
            media = 0;
        }

        final += media;
}
    final /= 5;
    printf("A media final da turma e: %.2f\n\n",final);

	
	return 0;
	
}



