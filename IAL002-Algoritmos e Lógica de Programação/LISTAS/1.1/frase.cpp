/*
	Name: frase.cpp	
	Author: rafael oliveira
	Date: 28/03/22 17:25
	Description: mostrar uma frase quantas vezes o usu�rio quiser
*/

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	char frase[100];
	int nVezes = 0;
	int c = 0;
	
	puts("<<< RAFA OLIVEIRA x_x >>>\n\n");
	
	printf("Digite uma frase: ");
	gets(frase);
	
	printf("Quantas vezes voc� quer que essa frase apare�a? ");
	scanf("%d", &nVezes);
	
	puts("BELEZA :) VAMO L�...\n");
	
	do{
		printf("%s\n", frase);
		Sleep(1000);
		
		c++;
	} while(c < nVezes);
}

