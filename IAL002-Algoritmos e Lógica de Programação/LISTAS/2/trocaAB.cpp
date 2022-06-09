/*
	Name: troca.cpp
	Author: Rafael Oliveira
	Date: 23/03/22 18:05
	Description: ler dois valores a e b e efetuar a troca
*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int a,b;
	a = b = 0;
	
	printf("DIGITE O VALOR DE A: ");
	scanf("%d", &a);
	
	printf("DIGITE O VALOR DE B: ");
	scanf("%d", &b);
	a = a + b;
	b = b - a;
	a = a - b;
	
	printf("A -> B: %d\nB -> A: %d", a , b);

}
