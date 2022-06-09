/*
	Name: limite.cpp
	Author:  Rafael Oliveira
	Date: 18/03/22 09:37
	Description: 
		programador para exibir uma contagem progressiva do limite inferior até atingir o limite superior
	
*/

/*

*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int limiteI = 0;
	int limiteS = 0;
	// int c = 0;
	
	printf("Digite o limite inferior: ");
	scanf("%d", &limiteI);
	
	printf("Digite o limite superior: ");
	scanf("%d", &limiteS);
	
	for(limiteI; limiteI <= limiteS; limiteI++){
		printf("\n %d", limiteI);
	}
	
	/*for(c = limiteI; c <= limiteS; c++){
		printf("\n %d", c);
	}*/
	

} // fim

