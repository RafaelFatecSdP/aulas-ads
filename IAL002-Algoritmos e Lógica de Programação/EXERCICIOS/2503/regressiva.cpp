/*
	Name: regressiva.cpp
	Author: Rafael Oliveira
	Date: 25/03/22 09:34
	Description: 
	PROGRAMA PRA EXIBIR UMA CONTAGEM REGRESSIVA 
	PARA O LANÇAMENTO DE UM FOGUETE
*/

// IMPORTS
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int tempo = 0;
	
	printf("Digite o tempo da contagem regressiva: ");
	scanf("%d", &tempo);
	
	puts("\nO FOGUETE SERÁ LANÇADO EM...");
	for(int i = tempo; i > 0; i--){
		printf("%d\n", i);
		Sleep(1000);
	} // fim for 
	
	puts("!!! FOGO !!!");
} // fim main

