/*
	Name: parImpar2
	Author: Rafael Oliveira
	Date: 18/03/22 11:24
	Description: programa pra identificar se o n�mero � par ou impar atrav�s do operador %
*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num = 0;
	
	while(1){
		printf("Digite um n�mero inteiro: ");
		scanf("%d", &num);
		if(num == 0){
			break;
		} else if(num % 2 == 0){
			// % - resto da divis�o
			puts("PAR");
		} else{
			puts("�MPAR");
		}
	} // FIM WHILE
	puts("[PROGRAMA FINALIZADO COM SUCESSO]");
	
} // MAIN

