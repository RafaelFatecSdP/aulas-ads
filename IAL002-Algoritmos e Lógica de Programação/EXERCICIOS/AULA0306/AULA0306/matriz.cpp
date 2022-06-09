/*
	Name: Matriz.cpp
	Author: Rafael
	Date: 27/05/22 10:27
	Description: Matriz
*/

#include<conio.h>
#include<stdio.h>
#include<locale.h>

main(){//inicio do main
	
	setlocale(LC_ALL,"Portuguese");
	
	float matriz[2][2];
	
	float media, quant;
	
	printf("Digite o 1º numero:");
	scanf("%f", &matriz[0][0]);

	printf("\nDigite o 2º numero:");
	scanf("%f", &matriz[0][1]);
	
	printf("\nDigite o 3º numero:");
	scanf("%f", &matriz[1][0]);
	
	printf("\nDigite o 4º numero:");
	scanf("%f", &matriz[1][1]);	
	
	quant = matriz[0][0] + matriz[0][1] + matriz[1][0] + matriz[1][1];
	
	media = quant/4.0;
	
	printf("\nA media dos 4 numeros é: %.2f", media);
	
	
}//fim do main


