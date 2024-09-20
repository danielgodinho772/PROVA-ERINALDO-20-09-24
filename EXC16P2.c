/*16. Escreva um programa que apresente um menu com as seguintes opções:
1. Calcular o fatorial de um número.
2. Sair.
O programa deve solicitar ao usuário um número inteiro e calcular o seu fatorial. O
menu deve continuar sendo exibido até que o usuário escolha a opção de sair. (0.2
ponto)
Entrada: escolha da opção e um número inteiro.
Saída: fatorial do número.*/

#include <stdio.h>
#include <locale.h>

int main() {
	int i, num, fato, opcao;
	
    do{
	printf("\nMenu:\n");
	printf("1. Calcular o fatorial de um numero.\n");
	printf("2. Sair.");
	printf("\n\nEscolha a opcao desejada? ");
	scanf("%d",&opcao);
	
	if(opcao ==1) {
	  fato = 1;
	  printf("Informe um numero? ");
	  scanf("%d",&num);
	  for( i =1; i<= num; i++){
			fato *= i;
}
    printf("\nO fatorial de %d ? = %d\n", num,fato);
}   else if(opcao==2){
	 	printf("Encerrado.");
    
}
	
}while (opcao != 2); 
	
	return 0;
	
  
}
