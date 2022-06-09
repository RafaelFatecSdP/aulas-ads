/*
	Name: lucro.cpp
	Author: Rafael Oliveira
	Date: 18/03/22 15:45
	Description: 
	- Se o valor da venda for igual ou inferior a R$ 1000,00 o total de lucro retornado da rotina deve ser de 20%;
	- Se o valor da venda for maior que R$ 1000,00 o total de lucro retornado na rotina deve ser de 15%;
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float valorV = 0.0;
	float lucro = 0.0;
	
	printf("Digite o valor da venda: ");
	scanf("%f", &valorV);
	
	if(valorV > 1000.00){
		lucro = (valorV * 0.15);
		printf("Lucro de 15%: %.2f" , lucro);
	} else{
		lucro = (valorV * 0.2);
		printf("Lucro de 20%: %.2f" , lucro);
	}
	
} // fim main


