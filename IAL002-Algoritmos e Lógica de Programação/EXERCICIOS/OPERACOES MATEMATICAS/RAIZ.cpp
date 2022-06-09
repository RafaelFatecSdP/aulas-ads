// RAIZ

#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	
	int num = 0;
	int c = 0;
	
	puts("[RAIZ] CÁLCULO DE RAIZ EXATA");
	
	printf("DIGITE A RAIZ EXATA: ");
	scanf("%d", &num);
	
	while(1){
		if(num == 0){
			printf("Raiz de %d é 0.", num);
			break;
		} else{
			c++;
			if(c*c == num){
				printf("Raiz de %d é %d.", num, c);
				break;
			}			
		}
	}
}

// E SE A RAIZ NÃO FOR EXATA??????????????????????????????
