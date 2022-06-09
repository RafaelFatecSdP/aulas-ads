// RESTO

#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num = 0;
	
	int resto = 0;
	int quoc =  0;
	
	printf("DIGITE UM NÚMERO: ");
	scanf("%d", &num);
	// ex: num = 10 ---- quoc = 10/2 quoc = 5 ---- resto = 10 - (5*2) -> 10 - 10 = 0
	quoc = num / 2;
	resto = num - (quoc * 2);
	
	if(resto == 0){
		printf("[PAR]");
	} else{
		printf("[ÍMPAR]");
	}
}
