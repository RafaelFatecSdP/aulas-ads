/*
	Name: parImpar.cpp
	Author: Rafael Oliveira
	Date: 18/03/22 10:52
	Description: programa pra identificar quando um n�mero � PAR ou �MPAR
*/

// IMPORTA��ES --- 
#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	// q - quociente | r - resto
	int num,q,r;
	// num = q; q = r; r = 0;
	num = q = r = 0;
	
	while(1){
		printf("Digite um n�mero: ");
		scanf("%d", &num);
		
		if(num == 0){
			break;
		}
		q = num/2;
		r = num - (q*2);
	
		if(r == 0){
			puts("PAR");
		} else{
			puts("�MPAR");
		}
	} // fim do while
	puts("[PROGRAMA FINALIZADO COM SUCESSO]");
  
	
	/*
	OU

	int num = 0;
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	if(num % 2 == 0){
		puts("PAR");
	} else{
		puts("�MPAR");
	}  
	
	*/
	
	
}


