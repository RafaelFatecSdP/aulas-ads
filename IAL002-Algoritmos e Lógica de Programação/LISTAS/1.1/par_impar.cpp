/*
	Name: par_impar.cpp
	Copyright: 
	Author: 
	Date: 28/03/22 16:32
	Description: verificar se o número digitado
	é par ou impar
	par - *5
	impar - /3
	n° iguais - + 
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int n = 0;
	
	puts("<<< RAFA OLIVEIRA x_x >>>\n\n");
	
	printf("Digite um número: ");
	scanf("%d", &n);
	
	if(n%2 == 0){
		printf("[PAR] %d X 5 = %d", n, n * 5);
	} else{
		printf("[ÍMPAR] %d / 3 = %d", n, n / 3);
	}	
} // fim while



