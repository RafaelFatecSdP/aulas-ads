/*
	Name: area.cpp
	Author: 
	Date: 23/03/22 16:34
	Description: 
	LISTA 1 - calcula área de uma propriedade por meio de medidas de frente e fundo
*/

// IMPORTAÇÕES --- 
#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float frente, fundo, area;
	frente = fundo = area = 0.0;
	
	printf("[VAMO MEDIR A ÁREA DA SUA PROPRIEDADE]\n");
	
	printf("DIGITE A MEDIDA DE FRENTE DO TERRENO: ");
	scanf("%f", &frente);
	
	printf("DIGITE A MEDIDA DE FUNDO DO TERRENO: ");
	scanf("%f", &fundo);
	
	area = (float) frente * fundo;
	printf("A ÁREA DO SEU TERRENO É: %.2f METROS QUADRADOS", area);
} // fim

