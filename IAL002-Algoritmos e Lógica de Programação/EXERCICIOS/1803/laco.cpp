/*
	Name: laco.cpp
	Author: Rafael Oliveira
	Date: 18/03/22 08:41
	Description: programa pra demonstrar o la�o de repeti��o 'for' e 
	exibir a tabuada de  ultiplica��o do nu ero escolhido pelo usu�rio
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
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	for(c = 0;c <= 10; c++){
		printf("%d X %d = %d \n", num , c , num * c);
	}
	
	// DESCRESCENTE
	printf("\n \nDigite um n�mero: ");
	scanf("%d", &num);
	
	for(c = 10; c >= 0; c--){
		printf("%d X %d = %d \n", num , c , num * c);
	}
	
} // fim main

