/*
	Name: dado.cpp
	Author: rafael oliveira
	Date: 29/03/22 12:20
	Description: percentual de quantas vezes uma face do dado cai
*/

// IMPORTS
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int lado1,lado2,lado3,lado4,lado5,lado6;
	lado1 = lado2 = lado3 = lado4 = lado5 = lado6 = 0;
	
	int faceEscolhida = 0;
	
	int nJogadas = 0;
	
	puts("ooooooooo        o      ooooooooo     ooooooo");
	puts(" 888    88o     888      888    88o o888   888o");
	puts(" 888    888    8  88     888    888 888     888");
	puts(" 888    888   8oooo88    888    888 888o   o888");
	puts("o888ooo88   o88o  o888o o888ooo88     88ooo88");
	
	printf("\n\nDIGITE A QUANTIDADE DE JOGADAS: ");
	scanf("%d", &nJogadas);
	
	while(nJogadas > 0){
		fflush(stdin);
		system("cls");
		
		puts(" <<< SEJA BEM VINDO AO NOSSO JOGO >>>\n\n");
		puts("É SIMPLES,BASTA JOGAR O DADO! LEMBRANDO,A CHANCE DA CADA LADO CAIR É DE 16,6% POR JOGADA. PENSE BEM...");
		
		printf("[MENU DE OPÇÕES]\n1 - 1\n2 - 2\n3 - 3\n4 - 4\n5 - 5\n6 - 6\n\n");
		
		printf("JOGADAS: %d", nJogadas);
		printf("\nQual número deseja: ");
		scanf("%d", &faceEscolhida);
		
		switch(faceEscolhida){
			case 1:
				lado1++;
				break;
				
			case 2:
				lado2++;
				break;
				
			case 3:
				lado3++;
				break;
				
			case 4:
				lado4++;
				break;
				
			case 5:
				lado5++;
				break;
				
			case 6:
				lado6++;
				break;
				
			default:
				puts("[ERRO] OPÇÃO INVÁLIDA");
				nJogadas++;
		} // fim switch
		nJogadas--;
		Sleep(1000);
	} // fim while
	
	
	printf("LADO 1: %d VEZES\nLADO 2: %d VEZES\nLADO 3: %d VEZES\nLADO 4: %d VEZES\nLADO 5: %d VEZES\nLADO 6: %d VEZES\n", lado1,lado2,lado3,lado4,lado5,lado6);
}






 
  
