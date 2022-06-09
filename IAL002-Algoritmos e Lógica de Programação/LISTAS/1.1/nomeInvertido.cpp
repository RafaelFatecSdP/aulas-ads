// IMPORTS
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

// BIBLIOTECA UTILZADA PARA MANIPULAR STRINGS
#include <string.h>  

main(){
	setlocale(LC_ALL,"Portuguese");
	
	char nome[25];

	while(1){
		fflush(stdin);
		puts("<<< RAFA OLIVEIRA x_x >>>");
		
		puts("[NOME INVERTIDO.COM]\n");

		printf("DIGITE SEU NOME: ");
		gets(nome);
 
		printf("NOME INVERTIDO: %s", strrev(nome));
		
		Sleep(1000);
		system("cls");

	} // fim while

}
