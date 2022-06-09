/*
	Name: par_impar.cpp
	Author: Arnaldo Carreiro e Rafael Oliveira
	Date: 01/04/22 08:39
	Description: identificar se o número é par ou ímpar e a partir disso realizar as operações adequadas
	
	Número par –multiplicar por 5;
	Número ímpar –dividir por 3.
*/


#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num = 0;
	int resto,quociente;
	resto = quociente = 0;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	quociente = num / 2;
	resto = num - (quociente * 2);
	
	if(resto == 0){
		printf("[PAR] %d X 5 = %d", num, num * 5);
	} else{
		printf("[ÍMPAR] %d / 3 = %.2f", num, (float)num/3);
	}
} // fim main
