/*
	Name: Repete.cpp
	Author: Arnaldo Carreiro e Rafael oliveira
	Date: 11/03/22 11:18
	Description: Programa para demonstrar o la�o de repeti��o
*/

#include <stdio.h>
#include <locale.h> //Biblioteca de localiza��o de regi�o para alterar a linguagem

main(){//inicio

	setlocale(LC_ALL,"Portuguese");
	
	int cont;
	cont = 0;
	
	do{
		cont = cont + 1;
		printf("%d \n" , cont);
	} while(cont <= 9);

}//fim
