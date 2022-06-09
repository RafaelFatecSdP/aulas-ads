/*
	Name: idade.cpp
	Author: Rafael Oliveira
	Date: 18/03/22 16:20
	Description: 
	- rotina que leia o ano de nascimento, o ano atual, imprima a idade da pessoa.
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int anoNasc , anoAtual, idade;
	anoNasc = anoAtual = idade = 0;
	
	printf("Digite seu ano de nascimento: ");
	scanf("%d", &anoNasc);
	
	printf("Digite o ano atual: ");
	scanf("%d", &anoAtual);
	
	idade = anoAtual - anoNasc;
	printf("Sua idade é: %d anos", idade);
	
	
} // fim main

