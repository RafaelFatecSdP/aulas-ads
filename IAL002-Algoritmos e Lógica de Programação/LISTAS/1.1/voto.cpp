/*
	Name: imc.cpp
	Author: Rafael oliveira
	Date: 28/03 17:00
	Description: 
	APURAR VOTOS,MOSTRAR A QTS DE VOTOS PRA CADA CANDIDATO 
	E MOSTRAR O VENCEDOR
	
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	puts("<<< RAFA OLIVEIRA x_x >>>\n\n");
	
	int voto, c, qtdVoto1, qtdVoto2, qtdVoto3;
	int populacao = 0;
	voto = c = qtdVoto1 = qtdVoto2 = qtdVoto3 = 0;

	puts("[SISTEMA DE VOTOS] OLÁ,SEJA BEM VINDO AO SISTEMA DE VOTOS\n\nVOTE 1 PARA O CANDIDATO FULANO\nVOTE 2 PARA O CANDIDATO BELTRANDO\nVOTE 3 PARA O CANDIDATO CICLANO\n\n");
	
	printf("DIGITE O TOTAL DE ELEITORES: ");
	scanf("%d",&populacao);
	
	while(c < populacao){
		printf("\nDIGITE SUA OPÇÃO: ");
		scanf("%d", &voto);
		c++;
		
		if(voto == 1){
			qtdVoto1++;
			// printf("QUANTIDADE DE VOTOS FULANO: %d", qtdVoto1);
		} else if(voto == 2){
			qtdVoto2++;
			// printf("QUANTIDADE DE VOTOS BELTRANO: %d", qtdVoto2);
		} else if(voto == 3){
			qtdVoto3++;
			// printf("QUANTIDADE DE VOTOS CICLANO: %d", qtdVoto3);
		} else{
			printf("[ERRO] VOTO INVÁLIDO\n");
		}
		
		Sleep(1500);
		system("cls");
		puts("[SISTEMA DE VOTOS] OLÁ,SEJA BEM VINDO AO SISTEMA DE VOTOS\n\nVOTE 1 PARA O CANDIDATO FULANO\nVOTE 2 PARA O CANDIDATO BELTRANDO\nVOTE 3 PARA O CANDIDATO CICLANO\n\n");
		printf("QUANTIDADE DE VOTOS FULANO: %d\nQUANTIDADE DE VOTOS BELTRANO: %d\nQUANTIDADE DE VOTOS CICLANO: %d\n", qtdVoto1, qtdVoto2, qtdVoto3);
	
		
		// (500 * 1000) / 100
	} // fim while
	
		if(qtdVoto1 > qtdVoto2 && qtdVoto1 > qtdVoto3){
			printf("\n\nPARABÉNS FULANO,VOCÊ FOI ELEITO COM %d VOTOS", qtdVoto1);
		} else if(qtdVoto2 > qtdVoto1 && qtdVoto2 > qtdVoto3){
			printf("\n\nPARABÉNS BELTRANO,VOCÊ FOI ELEITO COM %d VOTOS", qtdVoto2);
		} else if(qtdVoto3 > qtdVoto1 && qtdVoto3 > qtdVoto1){
			printf("\n\nPARABÉNS CICLANO,VOCÊ FOI ELEITO COM %d VOTOS", qtdVoto3);
		} else{
			printf("[ERRO]");
		}
		
		
		
		// COMO DESCONSIDERAR EMPATE?
	
	
	 


} // fim main
