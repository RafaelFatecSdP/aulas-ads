/*
	Name:  
	Author: Rafael Oliveira 
	Date: 18/03/22 11:38
	Description: programa que:
	- divide por 2 se o num for par
	- calcula o triplo se o numm for impar
*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int num = 0;
	
	puts("<======== SEJA BEM VINDO ========>");
	while(1){
		printf("\nDigite um número: \n");
		scanf("%d", &num);
		
		if(num == 0){
			puts("\n[ERR0] Número Inválido. Digite um número diferente de 0");
		} else if( num % 2 == 0){
			printf("[PAR] %d \n", num / 2);
		} else{
			printf("[ÍMPAR] %d \n", num *3);
		}
	}
}

