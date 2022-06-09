/*
	Name: calculadora.cpp
	Author: Rafael Oliveira 
	Date: 25/03/22 10:45
	Description: escolher operador por meio do menu de op��pes e efetuar o calculo entre dois numeros
*/

// IMPORTS
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2;
	n1 = n2 = 0.0;
	int opcao;
	
	while(1){
		fflush(stdin);
		opcao = 0;
		
		system("cls");
		
		puts("[CALCULADORA]\n\n");
		
		puts("[MENU DE OP��ES]\n");
		puts("1 - ADI��O\n2 - MULTIPLICA��O\n3 - DIVIS�O\n4 - SUBTRA��O\n5 - POTENCIA��O\n6 - RAIZ QUADRADA\n\n7 - ENCERRAR CALCULADORA\n");
		
		puts("DIGITE SUA OP��O DE OPERADOR: ");
		scanf("%d", &opcao);
		
		if(opcao == 6){
			printf("Digite o N�mero: ");
			scanf("%f", &n1);
		} else if(opcao != 7){
			if(opcao > 0 && opcao < 6){
				printf("Digite o 1� N�mero: ");
				scanf("%f", &n1);
			
				printf("Digite o 2� N�mero: ");
				scanf("%f", &n2);	
			}
		}
		
		switch(opcao){
			case 1:
				printf("%.2f + %.2f = %.2f", n1, n2, n1+n2);
				break;
				
			case 2:
				printf("%.2f * %.2f = %.2f", n1, n2, n1*n2);
				break;
				
			case 3:
				printf("%.2f / %.2f = %.2f", n1, n2, n1/n2);
				break;
				
			case 4:
				printf("%.2f - %.2f = %.2f", n1, n2, n1-n2);
				break;
				
			case 5:
				printf("%.2f ^ %.2f = %.2f", n1, n2, pow(n1,n2));
				break;
				
			case 6:
				printf("V%.0f = %.0f", n1,sqrt(n1));
				break;
				
			case 7:
				puts("[EXIT] A CALCULADORA SER� FINALIZADA... ");
				Sleep(1000);
				puts("CALCULADORA FINALIZADA COM SUCESSO :)");
				exit(0);
			
			default:
				puts("[ERRO] OPERA��O INV�LIDA");
				break;
		}
		Sleep(3000);
		
	}
}

