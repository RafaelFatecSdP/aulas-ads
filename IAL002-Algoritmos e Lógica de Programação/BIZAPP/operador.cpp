/*
	Name: operador.cpp
	Author: Rafael Oliveira 
	Date: 18/03/22 15:45
	Description: Digitar 2 números e calcular a partir do operador escolhido
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1 = 0;
	int n2 = 0;
	
	char op;
	
	printf("Operador: ");
	scanf("%c" , &op);
	

	if(op != '+' || op != '-' || op != '*' || op != '/' ){
		puts("[ERRO] OPERADOR INVÁLIDO");
	} else{
		printf("Digite o 1° número: ");
		scanf("%d", &n1);
		
		printf("Digite o 2° número: ");
		scanf("%d", &n2);

		if(op == '+'){
			puts("[+]");
			printf("Resultado: %d", n1 + n2);
		} else if(op == '-'){
			puts("[-]");
			printf("Resultado: %d", n1 - n2);
		} else if(op == '*'){
			puts("[*]");
			printf("Resultado: %d", n1 * n2);
		} else if(op == '/'){
			puts("[/]");
			printf("Resultado: %d", n1 / n2);
		} else{
			puts("[ERRO] OPERAÇÃO INVÁLIDA. TENTE NOVAMENTE");
		}
	} // else


} // fim main


