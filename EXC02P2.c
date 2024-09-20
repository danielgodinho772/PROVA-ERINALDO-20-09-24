/*2. Um n�mero perfeito � aquele que � igual � soma de seus divisores pr�prios
(excluindo ele mesmo). Escreva um programa que solicite ao usu�rio um n�mero
inteiro positivo e verifique se esse n�mero � perfeito. O programa deve utilizar um
la�o para somar os divisores e, no final, informar se o n�mero � perfeito ou n�o. (0.1
ponto)
Entradas: n�mero inteiro positivo.
Sa�da: informar se o n�mero � perfeito ou n�o.*/

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
