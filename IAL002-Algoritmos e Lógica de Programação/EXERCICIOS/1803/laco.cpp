/*
	Name: laco.cpp
	Author: Rafael Oliveira
	Date: 18/03/22 08:41
	Description: programa pra demonstrar o laço de repetição 'for' e 
	exibir a tabuada de  ultiplicação do nu ero escolhido pelo usuário
*/

/*
* conio - entrada e saida de console
*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>

main(){ 
	setlocale(LC_ALL, "Portuguese");
	
	int num = 0;
	int c;
	
	// CRESCENTE
	printf("Digite um número: ");
	scanf("%d", &num);
	
	for(c = 0;c <= 10; c++){
		printf("%d X %d = %d \n", num , c , num * c);
	}
	
	// DESCRESCENTE
	printf("\n \nDigite um número: ");
	scanf("%d", &num);
	
	for(c = 10; c >= 0; c--){
		printf("%d X %d = %d \n", num , c , num * c);
	}
	
} // fim main

