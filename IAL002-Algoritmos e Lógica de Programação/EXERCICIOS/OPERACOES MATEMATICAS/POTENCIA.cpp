// POTENCIA��O
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int base = 0;
	int expoente = 0;
	
	int c = 1;
	int potenciacao = 0;

	printf("DIGITE A BASE: ");
	scanf("%d", &base);
	
	printf("DIGITE O EXPOENTE: ");
	scanf("%d", &expoente);
	
	potenciacao = base;
	
	if(expoente == 0){
		puts("TODO N�MERO ELEVADO A 0 � << 1 >>");
	} else{
		while(c < expoente){
			potenciacao = potenciacao * base;
			c++;
		} // while
		printf("[POTENCIA��O] = %d", potenciacao);	
	} // else

}
