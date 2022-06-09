/*
	Name: azulejo.cpp
	Author: rafael oliveira
	Date: 29/03/22 11:51
	Description: calcular a quantidade de azulejos necess�rios para cobrir uma parede
*/


// IMPORTS
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	float alturaParede,larguraParede,areaParede,alturaAzulejo,larguraAzulejo,areaAzulejo;
	alturaParede = larguraParede = areaParede = alturaAzulejo = larguraAzulejo = areaAzulejo = 0.0;
	
	puts("SEJA BEM VINDO,VAMOS AOS C�LCULOS?\n");
	
	// RECEBENDO TODOS OS DADOS NECESS�RIOS
	
	// PAREDE ---
	puts("\n<<< PAREDE >>>");
	printf("Digite a altura da PAREDE em metros: ");
	scanf("%f", &alturaParede);
	
	printf("Digite a largura da PAREDE em metros: ");
	scanf("%f", &larguraParede);
	
	// AZULEJO ---
	puts("\n<<< AZULEJO >>>");
	printf("Digite a altura do AZULEJO em cent�metros: ");
	scanf("%f", &alturaAzulejo);
	
	printf("Digite a largura do AZULEJO em cent�metros: ");
	scanf("%f", &larguraAzulejo);
	
	// C�LCULOS DE �REA - A = b * h 
	areaParede = alturaParede * larguraParede;

	// CALCULO DE �REA DO AZULEJO MAIS A CONVERS�O PRA METROS
	areaAzulejo = (alturaAzulejo / 100) * (larguraAzulejo / 100);

	
	
	printf("\n\nVAMOS AOS DADOS OBTIDOS...\n�REA DA PAREDE %.2f METROS QUADRADOS\n�REA DO AZULEJO: %.2f METROS QUADRADOS\nVOC� IR� PRECISAR DE APROXIMADAMENTE %.0f AZULEJOS PARA COBRIR A PAREDE.", areaParede,areaAzulejo, areaParede / areaAzulejo);
	puts("\n\nAGORA,� M�O NA MASSA !!!");
	
}

