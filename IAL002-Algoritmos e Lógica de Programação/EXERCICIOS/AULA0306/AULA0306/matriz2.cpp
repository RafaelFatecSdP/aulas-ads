/*
	Name: Matriz2.cpp
	Author: Rafael Oliveira
	Date: 27/05/22 10:52
	Description: Matriz2
*/
#include<conio.h>
#include<stdio.h>
#include<locale.h>

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float matriz[4][2];
	
	float media,quant;
	int cont1,cont2;
	quant=0;
	
	for(cont1 = 0; cont1 <= 3; cont1++)
	{
		for(cont2 = 0; cont2 <= 1; cont2++)
		{
			printf("Digite o numero de posição %i, %i da matriz: ", 1, 0);
			scanf("%f", &matriz[cont1][cont2]);
			
			quant = quant + matriz[cont1][cont2];
		}
	}
	
	media = quant/8.0;
	printf("A media dos 8 numeros da matriz é: %.2f", media);
}
