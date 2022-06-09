/*
	Name: MÉDIA
	Author: Rafael Oliveira
	Date: 17/03/22 16:45
	Description: receber notas e calcular média através de laços de repetição
*/

// IMPORTAÇÕES --- 
#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float nota = 0.00;
	float media = 0.00;
	float soma = 0.00;
	
	int c;
	
	for(c = 0; c <8; c++){
		printf("Digite a nota %d:  \n", c);
		scanf("%f", &nota);
		soma = soma + nota ;
	}
	// calculo da média
	media = soma/c;
	printf("Média: %.2f" , media);
	if(media >= 6){
		printf("\nAPROVADO :)");
	} else{
		printf("\nREPROVADO :(");
	}
	
}

