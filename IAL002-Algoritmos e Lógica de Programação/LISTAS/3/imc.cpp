/*
	Name: imc.cpp
	Author: Rafael oliveira
	Date: 24/03 18:17
	Description: calcular o imc e classificar
	
	< 18.5 - baixo peso
	>= 18.6 - =< 24.9 - peso normal
	>= 25 - <= 29.9 - sobrepeso
	>= 30 - <= 34.9 - obesidade grau I
	>= 35 - <= 39.9 - obesidade grau II
	> 40 - obesidade grau III
*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float peso = 0.00;
	float pesoIdeal = 0.00;
	float altura = 0.00;
	float imc = 0.00;
	char resImc,sexo,situacao;
	
	printf("Digite seu sexo: \nM - MASCULINO \nF - FEMININO\n");
	scanf("%c", &sexo);
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	imc  = (float)peso / (altura * altura);

	
	if(sexo == 'M'){
		pesoIdeal = (72.7 * altura) - 58;
		sexo = 'Homem';
	} else if(sexo == 'F'){
		pesoIdeal = (62.1 * altura) - 44.7;
		sexo = 'Mulher';
	} 
	
	peso = peso - pesoIdeal;
	if(imc <= 18.5){
		resImc = 'Abaixo do peso';
		situacao = 'engordar';
	} else if(imc <= 24.9){
		resImc = 'Peso Normal';
		situacao = 'manter';
	} else if(imc <= 29.9){
		resImc = 'Sobrepeso';
		situacao = 'emagrecer';
	} else if(imc <= 34.9){
		resImc = 'Obesidade moderada';
		situacao = 'emagrecer';
	} else if(imc <= 39.9){
		resImc = 'Obesidade severa';
		situacao = 'emagrecer';
	} else{
		resImc = 'Obesidade mórbida';
		situacao = 'emagrecer';
	}
	
	printf("Você é %c e seu peso ideal é: %.2f \nHoje seu IMC é %.2f, classificado como: %c\nVocê deve %c: %.2f KG", sexo, pesoIdeal, imc,resImc,situacao,peso);
} // fim main
