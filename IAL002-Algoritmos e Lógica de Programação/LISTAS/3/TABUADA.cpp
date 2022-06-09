/*
	Name: imc.cpp
	Author: Rafael oliveira
	Date: 24/03 
	Description: CALCULAR A TABUADA DE UM N�MERO DIGITADO
*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num = 0;

	printf("[TABUADA] SAIBA A TABUADA DE QUALQUER N�MERO INTEIRO POSITIVO AGORA !!!\nCASO QUEIRA PARAR,DIGITE -1\n\n");
	while(1){
		printf("\nDigite um n�mero: ");
		scanf("%d", &num);
		
		if(num == -1){
			break;
		} else if(num >=0){
			for(int c = 1; c <= 10; c++){
				printf("%d X %d = %d\n", num, c, num * c);
			}
		} else{
			printf("[ERRO] DIGITE UM N�MERO INTEIRO POSITIVO");
		}
	} // fim while
	puts("[PROGRAMA FINALIZADO COM SUCESSO]");


} // fim main
