/*
	Name: exMatriz.cpp
	Author: Rafael oliveira
	Description: Exercício de Matriz
*/

#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<windows.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	// (QL)quantidade de linhas e quantidade de colunas(QC)
	int QL = 0;
	int QC = 0;
	
	int somaLinha1 = 0;
	int somaColuna2 = 0;
	int C = 0;
	
	
	printf("Digite a quantidade de linhas da matriz: ");
	scanf("%d", &QL);
	
	printf("Digite a quantidade de colunas da matriz: ");
	scanf("%d", &QC);
	
	int A[QL][QC];
	// int B[3][3];
	
	
	/*
    	* multiplicar a diagonal principal pela diagonal secundaria
 		* Elementos da Principal: 5,4,3 -- Elementos da Secundária: 2,4,8
 		* Operações:
		 			[0,0]5 X 2[0,2] = 10  
		 			[0,0]5 X 4[1,1] = 20
					[0,0]5 X 8[2,0] = 40 
					
					[1,1]4 X 2[0,2] = 8
					[1,1]4 X 4[1,1] = 16
					[1,1]4 X 8[2,0] = 32
					
					[2,2]3 X 2[0,2] = 6
					[2,2]3 X 4[1,1] = 12
					[2,2]3 X 8[2,0] = 24
	*/
	puts("\n<<< VAMOS CARREGAR A MATRIZ >>>");
	//(L)LINHA (C)COLUNA
	// Carga Da Matriz
	for(int L = 0; L < QL; L++){
		for(int C = 0; C < QC; C++){
				printf("Digite o numero de posição %d, %d da matriz: ", L, C);
				scanf("%d", &A[L][C]);
		}
	}
	
	Sleep(500);
	puts("\n<<< MULTIPLICAÇÃO DOS ITENS DA DIAGONAL PRINCIPAL PELOS ITENS DA DIAGONAL SECUNDÁRIA >>>");
	for(int L = 0; L < QL; L++){
			int L2 = 0;
			int C2 = QC - 1;
			
		for(int i = 0; i < QC; i++){
			if(L > 0 and C == 0){
				C++;
			} else if(L > 1 and C == 1){
				C++;
			} 
			
			printf("%d X %d = %d\n", A[L][C] , A[L2][C2], A[L][C] * A[L2][C2]);
			L2++;
			C2--;
		}
	}
	
	Sleep(500);
	C = 0;
	puts("\n<<< SOMA DOS ITENS DA DIAGONAL PRINCIPAL PELOS ITENS DA DIAGONAL SECUNDÁRIA >>>");
	for(int L = 0; L < QL; L++){
			int L2 = 0;
			int C2 = QC - 1;
			
		for(int i = 0; i < QC; i++){
			if(L > 0 and C == 0){
				C++;
			} else if(L > 1 and C == 1){
				C++;
			} 
			
			printf("%d + %d = %d\n", A[L][C] , A[L2][C2], A[L][C] + A[L2][C2]);
			L2++;
			C2--;
		}
	}
	
	// soma linha 1
	Sleep(500);
	puts("\n<<< SOMA DOS ITENS DA LINHA 1 >>>");
	for(int C = 0; C < QC ;C++){
		somaLinha1 += A[0][C];
	}
	printf("Soma Linha 1 = %d", somaLinha1);
	
	// soma coluna 2 
	Sleep(500);
	puts("\n<<< SOMA DOS ITENS DA COLUNA 2 >>>");
	for(int L = 0; L < QL; L++){
		somaColuna2 += A[L][1];
	}
	printf("Soma Coluna 2 = %d", somaColuna2);
	
	
	return 0;
}

