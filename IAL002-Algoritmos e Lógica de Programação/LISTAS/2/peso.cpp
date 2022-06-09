/*
	Name: peso.cpp
	Author: Rafael Oliveira
	Date: 23/03/22 17:55
	Description: classificar peso ideal de acordo com o sexo
	
	MULHERES (F) - (62.1 * alt) – 44.7
	HOMENS (M) - (72.7 * alt) – 58
	
*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float altura, peso;
	char sexo;
	
	printf("DIGITE SEU SEXO: \nM - MASCULINO \nF - FEMININO\n");
	scanf("%c", &sexo);
	// printf("%c", sexo);
	
	printf("DIGITE SUA ALTURA: ");
	scanf("%f", &altura);
	
	if(sexo == 'M'){
		peso = (72.7 * altura) - 58;
		printf("VOCÊ É HOMEM E SEU PESO IDEAL É: %.2f KG", peso);
	} else if(sexo == 'F'){
		peso = (62.1 * altura) - 44.7;
		printf("VOCÊ É MULHER E SEU PESO IDEAL É: %.2f KG", peso);
	} else{
		printf("[ERRO] TENTE NOVAMENTE");
	}
} // fim main

