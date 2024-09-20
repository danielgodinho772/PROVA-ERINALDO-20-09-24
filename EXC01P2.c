/*1. Escreva um programa em C que solicite ao usuário o valor inicial de um
investimento, a taxa de juros anual (em porcentagem) e o número de anos que o
dinheiro será investido. O programa deve calcular o valor final do investimento ao
final de cada ano, aplicando os juros compostos, e mostrar uma tabela com o valor
acumulado ano a ano. (0.1 ponto)
Entradas: valor inicial, taxa de juros anual, número de anos.
Saída: tabela mostrando o ano e o valor do investimento ao final de cada ano.*/

#include <stdio.h>
#include <math.h>

int main () {
	double inicial,juros,final;
	int anos;
	
	printf("Informe o valor inicial do investimento: R$");
	scanf("%lf",&inicial);
	
	printf("Informe o valor da taxa anual (Em porcentagem): ");
	scanf("%lf",&juros);
	
	printf("Informe quantos anos durara o investimento: ");
	scanf("%d",&anos);
	
	juros = juros/100;
	
	printf("\nAno\tValor acumulado\n");
	printf("-----------------------\n");
	
	
	int i;
	 for(i = 1; i <= anos; i++) {
		final = inicial * pow(1 + juros, i);
		printf("%d\t%.2lf\n",i,final);
		
	}
     
	 return 0;	
}
