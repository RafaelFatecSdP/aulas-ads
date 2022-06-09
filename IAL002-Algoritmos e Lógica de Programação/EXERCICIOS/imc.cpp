/*
	Name: IMC
	Author: Rafael Oliveira
	Date: 17/03/22 15:56
	Description: calcular o imc e classificar
	
	< 18.5 - baixo peso
	>= 18.6 - =< 24.9 - peso normal
	>= 25 - <= 29.9 - sobrepeso
	>= 30 - <= 34.9 - obesidade grau I
	>= 35 - <= 39.9 - obesidade grau II
	> 40 - obesidade grau III
*/

// IMPORTAÇÕES ---
#include <stdio.h>
#include <locale.h> 

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float peso = 0.00;
	float altura = 0.00;
	float imc = 0.00;
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	imc  = (float)peso / (altura * altura);
	printf("PESO: %.2f \n" , peso);
	printf("ALTURA: %.2f \n" , altura);
	printf("IMC: %.2f \n" , imc);
	

	if(imc <= 18.5){
		printf("BAIXO PESO");
	} else if(imc <= 24.9){
		printf("PESO NORMAL");
	} else if(imc <= 29.9){
		printf("SOBREPESO");
	} else if(imc <= 34.9){
		printf("OBESIDADE GRAU I");
	} else if(imc <= 39.9){
		printf("OBESIDADE GRAU II");
	} else{
		printf("OBESIDADE GRAU III");
	}
}
