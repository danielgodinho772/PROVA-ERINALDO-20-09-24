/*16. Escreva um programa que apresente um menu com as seguintes op��es:
1. Calcular o fatorial de um n�mero.
2. Sair.
O programa deve solicitar ao usu�rio um n�mero inteiro e calcular o seu fatorial. O
menu deve continuar sendo exibido at� que o usu�rio escolha a op��o de sair. (0.2
ponto)
Entrada: escolha da op��o e um n�mero inteiro.
Sa�da: fatorial do n�mero.*/

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
