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
		printf("\nDigite um n�mero: \n");
		scanf("%d", &num);
		
		if(num == 0){
			puts("\n[ERR0] N�mero Inv�lido. Digite um n�mero diferente de 0");
		} else if( num % 2 == 0){
			printf("[PAR] %d \n", num / 2);
		} else{
			printf("[�MPAR] %d \n", num *3);
		}
	}
}

