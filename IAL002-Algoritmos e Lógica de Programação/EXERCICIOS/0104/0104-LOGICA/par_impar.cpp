/*
	Name: par_impar.cpp
	Author: Arnaldo Carreiro e Rafael Oliveira
	Date: 01/04/22 08:39
	Description: identificar se o n�mero � par ou �mpar e a partir disso realizar as opera��es adequadas
	
	N�mero par �multiplicar por 5;
	N�mero �mpar �dividir por 3.
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
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	quociente = num / 2;
	resto = num - (quociente * 2);
	
	if(resto == 0){
		printf("[PAR] %d X 5 = %d", num, num * 5);
	} else{
		printf("[�MPAR] %d / 3 = %.2f", num, (float)num/3);
	}
} // fim main
