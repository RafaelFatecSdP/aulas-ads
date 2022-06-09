/*
	Name: imc.cpp
	Author: Rafael oliveira
	Date: 24/03 
	Description: LER NÚMERO INTEIRO POSITIVO,
	CALCULAR SEU DOBRO E 
	MOSTRAR SEU NÚMERO NEGATIVO EM CONTAGEM REGRESSIVA
*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, numDobro,numNegativo;
	num = numDobro = numNegativo =  0;
	
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	numDobro = num * 2;
	numNegativo = num - numDobro;

	//printf("NUMERO: %d\nDOBRO: %d\nNEGATIVO: %d", num, numDobro, numNegativo);
	
	do{
		printf("%d \n", numNegativo);
		numNegativo++;
	} while(numNegativo <= num);
	
} // fim main
