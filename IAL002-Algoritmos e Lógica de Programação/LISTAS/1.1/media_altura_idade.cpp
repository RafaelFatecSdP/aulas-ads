/*
	Name: media_altura_idade.cpp
	Author: rafael oliveira
	Date: 27/03/22 22:08
	Description: calcular a media de altura e idade 
	de uma população
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float altura,somaI,somaA,mediaI,mediaA;
	int idade,populacao;
	idade = populacao = 0;
	altura = somaI = somaA = mediaI = mediaA = 0.0;
	
	puts("<<< RAFA OLIVEIRA x_x >>>\n\n");
	
	puts("===== MEDIA DE IDADE E ALTURA =====\n\n");
	printf("Digite a população total:");
	scanf("%d", &populacao);
	
	for(int c = populacao; c > 0; c--){
		
		printf("\n");
		printf("PESSOA [%d] \n", c);
		printf("ALTURA: ");
		scanf("%f", &altura);
		
		printf("IDADE: ");
		scanf("%d", &idade);
		
		somaA = somaA + altura;
		somaI = somaI + idade;
		
		Sleep(500);

	}
	
	mediaA = somaA / populacao;
	mediaI = somaI / populacao;
	
	printf("\n\n====== RESULTADO ====== \nA MÉDIA DE ALTURA DESSA POPULAÇÃO É: %.2f METROS\nA MEDIA DE IDADE DESSA POPULAÇÃO É: %.0f ANOS", mediaA,mediaI);
	
}


