/*
	Name: idade_velho_novo.cpp
	Author: rafael oliveira
	Date: 28/03/22 16:39
	Description: verificar qual idade é mais velha
	e qual idade é a mais nova
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int idade,idadeNovo,idadeVelho;
	idade = idadeVelho = 0;
	idadeNovo = 1000;

	puts("<<< RAFA OLIVEIRA x_x >>>\n\n");
	
	for(int c = 1; c <= 10; c++){
		printf("Digite a idade n° %d: ", c);
		scanf("%d", &idade);
		
		if(idade > idadeVelho){
			idadeVelho = idade;
		} else if(idade < idadeNovo){
			idadeNovo = idade;
		}
	} // fim for
	
	printf("\n\nA IDADE MAIS VELHA É: %d ANOS\nA IDADE MAIS NOVA É: %d ANOS", idadeVelho,idadeNovo);

} // fim while



