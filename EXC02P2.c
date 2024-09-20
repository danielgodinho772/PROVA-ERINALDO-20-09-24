/*2. Um número perfeito é aquele que é igual à soma de seus divisores próprios
(excluindo ele mesmo). Escreva um programa que solicite ao usuário um número
inteiro positivo e verifique se esse número é perfeito. O programa deve utilizar um
laço para somar os divisores e, no final, informar se o número é perfeito ou não. (0.1
ponto)
Entradas: número inteiro positivo.
Saída: informar se o número é perfeito ou não.*/

#include <stdio.h>

 int main () {
 	int num, soma = 0;
 	
 	printf("Informe um numero positivo: ");
 	scanf("%d",&num);
 	
 	if (num <= 0) {
 		printf("Por favor insira um numero positivo");
 		return 1;
	 }
	 
	 int i;
	 for (i = 1; i < num; i++) {
	 	if (num % i == 0) {
	 		soma += i;
		 }
	 }
 	
 	
 	if (soma == num) {
 		printf("O numero %d e perfeito.\n",num);
	 } else {
	 	printf("O numero %d nao e perfeito.\n",num);
	 }
 	
 	return 0;
 }
