/*
	Name: multiplaEscolha.cpp
	Author: Rafael Oliveira 
	Date: 25/03/22 08:42
	Description: programa para demonstrar a estrutura de multipla escolha (switch case)
*/

// IMPORTS
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>
//#include <system.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int opcao;

	while(1){
		// limpar o buffer do teclado
		fflush(stdin);
		
		opcao = 0;
		// limpar a tela - clear screen
		system("cls");
		
		puts("[MENU DE OPÇÕES]");
		puts("\n====================");
		puts("1 - ADICIONAR\n2 - MULTIPLICAR\n3 - DIVIDIR\n9 - SAIR");
		puts("====================\n");
		
		printf("\nESCOLHA SUA OPÇÃO: ");
		scanf("%d", &opcao);
		
			switch(opcao){
				case 1:
					puts("[+]VOCÊ ESCOLHEU A OPÇÃO PARA ADICIONAR");
					break;
					
				case 2:
					puts("[*]VOCÊ ESCOLHEU A OPÇÃO PARA MULTIPLICAR");
					break;
					
				case 3:
					puts("[/]VOCÊ ESCOLHEU A OPÇÃO PARA DIVIDIR");
					break;
					
				case 9:
					puts("[EXIT] VOCÊ DIGITOU 9. O PROGRAMA SERA FINALIZADO...");
					Sleep(3000);
					puts("[EXIT] PROGRAMA FINALIADO COM SUCESSO :) ATÉ A PROXIMA");
					exit(0);

				default:
					puts("[ERRO] VOCÊ ESCOLHEU UMA OPÇÃO INVÁLIDA :|");
					break;
			} // fim switch
				
			// suspende o programa por um determinado por tempo Sleep(milisegundos)
			Sleep(1500);
			
			/*
			puts("PRESSIONE << ENTER >>");
			// para a execução,aguardando o pressionar de alguma tecla
			getch();
			*/
	
		} // fim while
		



	
} // fim  main
