/*
	Name: voto.cpp
	Author: 
	Date: 23/03/22 16:34
	Description: 
	LISTA 1 - Calcular e escrever o percentual que cada um 
	representa em
	relação ao total de eleitores.
*/

// IMPORTAÇÕES --- 
#include <stdio.h>
#include <locale.h>
#include <conio.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int tEleitor = 0;
	float vBranco, vNulo, vValido;
	vBranco = vNulo = vValido = 0.0;
	
	
	printf("DIGITE O NÚMERO TOTAL DE ELEITORES: ");
	scanf("%d", &tEleitor);
	
	printf("DIGITE O NÚMERO TOTAL DE VOTOS BRANCOS: ");
	scanf("%f", &vBranco);
	
	printf("DIGITE O NÚMERO TOTAL DE VOTOS NULOS: ");
	scanf("%f", &vNulo);
	
	printf("DIGITE O NÚMERO TOTAL DE VOTOS VÁLIDOS: ");
	scanf("%f", &vValido);
	
	vBranco = (float)tEleitor * (vBranco/100);
	printf("\nVOTOS BRANCOS: %.2f PORCENTO", vBranco);
	
	vNulo = (float)tEleitor * (vNulo/100);
	printf("\nVOTOS NULOS: %.2f PORCENTO", vNulo);
	
	vValido = (float)tEleitor * (vValido/100);
	printf("\nVOTOS VÁLIDOS: %.2f PORCENTO", vValido);
		
		
	/*	
	p = (float)vBranco/100;
	printf("%.2f", p);
	*/
} // fim main
