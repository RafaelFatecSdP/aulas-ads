/*
	Name: Exercicio07.cpp
	Author: Geovanna Medeiros
	Date: 28/03/22 21:59
	Description: Desenvolva uma solução para um problema muito comum que é calcular o 
    percentual em que cada face de um dado “cai” em uma mesa de cassino para 
    um número aleatório de jogadas
*/
#include <stdio.h>
#include <locale.h>// Para acentuação 
#include <conio.h> // Console Input Output
#include <windows.h>//biblioteca windows
main () {
setlocale(LC_ALL, "Portuguese");
int jogo=0;
float l1=0, l2=0, l3=0, l4=0, l5=0, l6=0; // faz a somatória de +1 para cada face do dado 
int cont=0;


while(1) {
system("cls");
puts ("Bem-vindo ao Cassino Geovanninha, insira ao lado em que face o dado caiu:\n");
puts("===================");
puts ("1-Face 01  \n 2-Face 02 \n 3-Face 03 \n 4-Face 04 \n 5-Face 05 \n 6-Face 06 \n 7-Desejo finalizar as jogadas!");
puts("===================");

printf("Escolha sua opção:");
scanf("%d", &jogo);
cont++;  // contabiliza as jogadas totais

switch (jogo)
{
	
	case 1: puts ("O dado caiu na face 01!");
	l1++;
	break;
	
	case 2: puts ("O dado caiu na face 02!");
	l2++;
	break;
	
	case 3: puts ("O dado caiu na face 03!");
	l3++;
	break;
	
	case 4: puts ("O dado caiu na face 04!");
	l4++;
	break;
	
	case 5: puts ("O dado caiu na face 05!");
	l5++;
	break;
	
	case 6: puts ("O dado caiu na face 06!");
	l6++;
	break;
	
	puts ("\n Pressione 07 para finalizar as jogadas! \n");
	
	case 7: puts ("Porcentagem de da frequência que cada face caiu:");
	
	l1=(l1/cont)*100;
	l2=(l2/cont)*100;
	l3=(l3/cont)*100;
	l4=(l4/cont)*100;
	l5=(l5/cont)*100;
	l6=(l6/cont)*100;
	
 printf ("A porcentagem de vezes que Face 01 caiu foi: %.2f \n", l1);
 printf ("A porcentagem de vezes que Face 02 caiu foi: %.2f \n", l2);
 printf ("A porcentagem de vezes que Face 03 caiu foi: %.2f \n", l3);
 printf ("A porcentagem de vezes que Face 04 caiu foi: %.2f \n", l4);
 printf ("A porcentagem de vezes que Face 05 caiu foi: %.2f \n", l5);
 printf ("A porcentagem de vezes que Face 06 caiu foi: %.2f \n", l6);

	Sleep (5000);
	puts ("\n Até o próximo jogo!");
	exit(0);
	
	default: puts("Insira um valor válido das faces do dado!");
	
}
Sleep (500);
	}		
		}
