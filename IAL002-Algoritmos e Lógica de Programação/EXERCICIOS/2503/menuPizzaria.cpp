/*
	Name: menuPizzaria.cpp
	Author: Rafael Oliveira
	Date: 25/03/22 09:49
	Description: 
	USUÁRIO ESCOLHER QUANTAS PIZZAS QUISER POR MEIO DO MENU COM 7 SABORES
*/

// IMPORTS
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	
	while(1){
		fflush(stdin);
		opcao = 0;
		system("cls");

		
		puts("[PIZZARIA FATEC] MENU DE OPÇÕES");
		puts("\n====================");
		puts("1 - MUSSARELA\n2 - PORTUGUESA\n3 - ATUM\n4 - CALABRESA\n5 - FRANGO COM CATUPIRY\n6 - BRÓCOLIS COM QUEIJO\n7 - BRIGADEIRO\n8 - ENCERRAR PEDIDO\n\n9 - CANCELAR PEDIDO");
		puts("====================\n");
		
		printf("\nESCOLHA SUA OPÇÃO: ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1: 
				puts("PIZZA DE MUSSARELA ADICIONADA AO CARRINHO");
				break;
			
			case 2: 
				puts("PIZZA DE PORTUGUESA ADICIONADA AO CARRINHO");
				break;
			
			case 3: 
				puts("PIZZA DE ATUM ADICIONADA AO CARRINHO");
				break;
			
			case 4: 
				puts("PIZZA DE CALABRESA ADICIONADA AO CARRINHO");
				break;
				
			case 5: 
				puts("PIZZA DE FRANGO COM CATUPIRY ADICIONADA AO CARRINHO");
				break;
				
			case 6: 
				puts("PIZZA DE BRÓCOLIS COM QUEIJO ADICIONADA AO CARRINHO");
				break;
				
			case 7:
				puts("PIZZA DE BRIGADEIRO ADICIONADA AO CARRINHO");
				break;
						
			case 8:
				puts("[EXIT] VOCÊ DIGITOU 8. O SEU PEDIDO SERA FINALIZADO...");
				Sleep(1000);
				puts("PEDIDO FINALIZADO COM SUCESSO. AGUARDE FICAR PRONTO :)");
				exit(0);
			
			default:
				puts("[ERRO] OPÇÃO DE SABOR INVÁLIDA");
		} // FIM SWITCH
		Sleep(1500);
	} // FIM WHILE
	
} // FIM MAIN

