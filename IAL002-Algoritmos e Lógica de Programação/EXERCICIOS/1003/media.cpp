/*
	Name: media.cpp 
	Author: Rafael Oliveira
	Date: 11/03/22 09:17
	Description: programa para ler 3 n�meros e calcular a m�dia
*/

	/*
	* MOSTRE: puts - imprime s� string (imprime e o cursor vai pra linha de baixo)
	* LEIA: scanf - entrada formatada,o que foi digitado no teclado
	* scanf("%d", &a): 
		* %d - dado,n�inteiro ou %i - inteiro  
		* &a - enviar o dado pra vari�vel
			* se n�o colocar o &,o valor digitado n�o � levado pra mem�ria,logo,a execu��o � finalizada
	* float - real - flutuante
	* printf("Media aritmetica: %f" , media);
		* %f - formata��o float
		* %.2f - 2 casas decimais depois da v�rgula
	* CASTING (formata��o do c�lculo):
		* media = (float)(n1+n2+n3)/3; - pega o resultado da divis�o inteira e real
	* (F11) - compila e executa
	*/

// IMPORTA��ES --- 
#include <stdio.h>

main(){
	int n1,n2,n3;
	float media;
	
	n1 = 0;n2 = 0;n3 = 0;
	media = 0.0;
	
	puts("Digite 3 numeros inteiros: ");
	scanf("%d", &n1);
	scanf("%i", &n2);
	scanf("%d", &n3);
	
	media = (float)(n1+n2+n3)/3;
	printf("Media aritmetica: %.2f" , media);
} // fim do programa

