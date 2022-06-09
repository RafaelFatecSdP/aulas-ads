/*
	Name: temperatura.cpp
	Author: Rafael oliveira
	Date: 23/03/22 17:45
	Description: tranformar a temperatura de celsius para farenheits
*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float celsius, conversao;
	celsius = conversao = 0.0;
	
	printf("DIGITE A TEMPERATURA EM GRAUS CELSIUS: ");
	scanf("%f", &celsius);
	
	conversao =  (celsius * (9/5) + 32);
	printf("%.2f GRAUS CELSIUS EQUIVALEM A %.2f GRAUS FAHRENHEITS", celsius , conversao);
} // fim main
