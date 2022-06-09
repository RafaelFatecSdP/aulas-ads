/*
	Name: MaisVelhoMaisNovo.cpp
	Author: Rafael Oliveira e Arnaldo Carreiro
	Date: 01/04/22 09:22
	Description: 
*/

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int idade,idadeVelho,idadeNovo;
	
	idade = idadeVelho = idadeNovo = 0;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	idadeVelho = idade;
	idadeNovo = idade;
	
	for(int i = 0; i < 9; i++){
		
		printf("Digite sua idade: ");
		scanf("%d", &idade);
		
		if(idade > idadeVelho){
			idadeVelho = idade;
		}
		else if(idade < idadeNovo){
			 idadeNovo = idade;
		}
	} //fim for
	
	printf("\n\nA IDADE MAIS VELHA É: %d ANOS\nA IDADE MAIS NOVA É: %d ANOS", idadeVelho,idadeNovo);
} // fim main

