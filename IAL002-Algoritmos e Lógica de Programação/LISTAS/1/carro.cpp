/*
	Name: carro.cpp
	Author: 
	Date: 23/03/22 16:34
	Description: 
	LISTA 1 - cler o custo de fa´brica
	de um carro, calcular e escrever o 
	custo final ao consumidor
*/

// IMPORTAÇÕES --- 
#include <stdio.h>
#include <locale.h>
#include <conio.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	/*
	custoFI - custo de Fábrica Inicial
	custoFF - custo de Fábrica Final
	custC - custo carro
	porcentagemD
	*/
	float custoF, custoC, porcentagemD, imposto;
	custoF = custoC = porcentagemD = imposto = 0.0;
	
	printf("Digite o custo de fábrica: ");
	scanf("%f", &custoF);
	
	imposto = 0.45;
	porcentagemD = 0.28;
	custoC = (float)(custoF * imposto) + (custoF * porcentagemD);
	printf("CUSTO DE UM CARRO NOVO: R$ %.2f ", custoC);
	
} // fim main
