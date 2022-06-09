/*
	Name: perimCircunferencia.cpp
	Author: 
	Date: 23/03/22 16:34
	Description: 
	LISTA 1 - calcular perimetro de uma circunferencia
*/

// IMPORTAÇÕES --- 
#include <stdio.h>
#include <locale.h>
#include <conio.h>

// #define PI 3.14;

main(){
	setlocale(LC_ALL, "Portuguese");

	float raio, perimetro;
	raio = perimetro = 0.0;
	
	printf("DIGITE O RAIO DA CIRCUNFERÊNCIA: ");
	scanf("%f", &raio);
	
	perimetro = 2 * 3.14 * raio;
	printf("O PERIMETRO DESSA CIRCUNFERÊNCIA É: %.2f", perimetro);
} // fim main


