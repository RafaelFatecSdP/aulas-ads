/*
	Name: Idades.cpp
	Author: Arnaldo Carreiro 
	Date: 11/03/22 10:54
	Description: Programa para classificar a faixa etaria
*/

#include <stdio.h>
#include <locale.h> //Biblioteca de localização de região para alterar a linguagem

main(){//inicio

	setlocale(LC_ALL,"Portuguese");// Escolhendo a lingua Portuguesa
	int idade;
	idade = 0;
	
	printf("Digite a sua idade: ");
	
	scanf("%i", &idade);
	
	if(idade<=12){
		puts("Você é uma Criança");
	}
		else if(idade<=19){
			puts("Você é um Adolescente");
		} 
			else if(idade<=59){
				puts("Você é um Adulto");
				
			}
	
	else{
		puts("Você é um Idoso");
	}	
}//fim	
