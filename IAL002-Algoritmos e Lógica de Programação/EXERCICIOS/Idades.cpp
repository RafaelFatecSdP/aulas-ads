/*
	Name: Idades.cpp
	Author: Arnaldo Carreiro 
	Date: 11/03/22 10:54
	Description: Programa para classificar a faixa etaria
*/

#include <stdio.h>
#include <locale.h> //Biblioteca de localiza��o de regi�o para alterar a linguagem

main(){//inicio

	setlocale(LC_ALL,"Portuguese");// Escolhendo a lingua Portuguesa
	int idade;
	idade = 0;
	
	printf("Digite a sua idade: ");
	
	scanf("%i", &idade);
	
	if(idade<=12){
		puts("Voc� � uma Crian�a");
	}
		else if(idade<=19){
			puts("Voc� � um Adolescente");
		} 
			else if(idade<=59){
				puts("Voc� � um Adulto");
				
			}
	
	else{
		puts("Voc� � um Idoso");
	}	
}//fim	
