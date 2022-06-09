/*
	Name: parImpar2
	Author: Rafael Oliveira
	Date: 18/03/22 11:24
	Description: programa pra identificar se o número é par ou impar através do operador %
*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num = 0;
	
	while(1){
		printf("Digite um número inteiro: ");
		scanf("%d", &num);
		if(num == 0){
			break;
		} else if(num % 2 == 0){
			// % - resto da divisão
			puts("PAR");
		} else{
			puts("ÍMPAR");
		}
	} // FIM WHILE
	puts("[PROGRAMA FINALIZADO COM SUCESSO]");
	
} // MAIN

