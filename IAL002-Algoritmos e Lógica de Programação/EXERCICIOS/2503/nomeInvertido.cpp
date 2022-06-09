// IMPORTS
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

#include <stdio.h>  
#include <string.h>  

main(){
	setlocale(LC_ALL,"Portuguese");
	
	char nome[6];
	
	printf("DIGITE SEU NOME: ");
	scanf("%s", &nome);
	
	printf("NOME INVERTIDO: %s", strrev(nome));
}
