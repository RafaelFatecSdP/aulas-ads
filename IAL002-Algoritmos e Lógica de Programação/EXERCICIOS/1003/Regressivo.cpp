/*
	Name: Regressivo.cpp
	Author: Arnaldo Carreiro e Rafael oliveira
	Date: 11/03/22 11:34
	Description: Contagem regressiva
*/

#include <stdio.h>
#include <locale.h> //Biblioteca de localização de região para alterar a linguagem

main(){//inicio
	
	int num = 0, cont = 0;
		
	printf("Digite um numero para iniciar a contagem  regressiva ");
	scanf("%d", &num);
	
	while(num >= 0)
	{
		printf("%d \n", num);
		num = num - 1;
	} puts("essa foi quantas vezes o arnaldo foi trouxa :). Arrasta pra cima pra mais informações");
	
	
}//fim
