/*
	Name: voto.cpp
	Author: Arnaldo Carreiro e Rafael Oliveira
	Date: 01/04/22 08:57
	Description: 
	- APURAR VOTOS,MOSTRAR A QTS DE VOTOS PRA CADA CANDIDATO 
	E MOSTRAR O VENCEDOR
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	int qtdVoto1,qtdVoto2,qtdVoto3;
	
	while(1){
		opcao = 0;
		
		system("cls");
		Sleep(1000);
		
		puts("[SISTEMA DE VOTOS] OLÁ,SEJA BEM VINDO AO SISTEMA DE VOTOS\n\nMENU DE OPÇÕES\n1 - FULANO\n2 - BELTRANO\n3 - CICLANO\n\n4 - FINALIZAR ELEIÇÃO\n\n");
		printf("QUANTIDADE DE VOTOS FULANO: %d\nQUANTIDADE DE VOTOS BELTRANO: %d\nQUANTIDADE DE VOTOS CICLANO: %d\n", qtdVoto1, qtdVoto2, qtdVoto3);
		
		printf("Digite sua opção de voto: ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				qtdVoto1++;
				break;
				
			case 2:
				qtdVoto2++;
				break;
				
			case 3:
				qtdVoto3++;
				break;
				
			case 4:
				puts("[EXIT] ELEIÇÃO FINALIZADA");
				break;
				
			default:
				puts("[ERRO] VOTO INVÁLIDO");
				break;
		} // switch
		
		
	} // while

} // main

