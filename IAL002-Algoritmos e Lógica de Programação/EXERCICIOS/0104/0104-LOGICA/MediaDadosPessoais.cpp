/*
	Name: MediaDadosPessoais
	Author: Rafael Oliveira e Arnaldo
	Date: 01/04/22 09:42
	Description: 
	calculo de media de idade,altura e peso para "N" pessoas
*/


#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	puts("<<< RAFA OLIVEIRA x_x  E ARNALDO CARREIRO >>>\n");
	
	// DECLARA��O DAS VARI�VEIS
	
	// VARIAVEIS DE ENTRADA
	int idade = 0;
	float peso = 0.0;
	float altura = 0.0;
	char sexo;
	
	// CONTADORES
	int cPessoas,qtdH,qtdM;

	// VARI�VEIS DE C�LCULO
	int idadeH,idadeM;
	float pesoH,pesoM,altH,altM;
	float idadeMedH, idadeMedM, altMedH, altMedM,pesoMedH,pesoMedM; 

	
	// INICIALIZA��O DAS VARI�VEIS
	idade = cPessoas = qtdH = qtdM = idadeH = idadeM = 0;
	peso = altura = pesoH = pesoM = altH = altM = 0.0;
	idadeMedH = idadeMedM = altMedH = altMedM = pesoMedH = pesoMedM = 0.0;
	
	while(1){
		printf("\nIDADE: ");
		scanf("%d", &idade);
		
		if(idade == 0){
			break;
		} 
			
		// VERIFICAR SE O SEXO DIGITADO FOI MASCULINO OU FEMININO
		fflush(stdin);
		printf("SEXO: ");
		scanf("%s", &sexo);
	
		printf("ALTURA: ");
		scanf("%f", &altura);
			
		
		printf("PESO: ");
		scanf("%f", &peso); 
			
		if(sexo == 'M' || sexo == 'm'){
			qtdH++;
			idadeH += idade;
			pesoH += peso;
			altH += altura;
		} else if(sexo == 'F' || sexo == 'f'){
			qtdM++;
			idadeM += idade;
			pesoM += peso;
			altM += altura;
		} else{
			puts("[ERRO] SEXO INV�LIDO");
		}// if sexo

	} // while
	cPessoas++;
	
	// C�LCULO M�DIAS
	if(qtdH != 0){
		idadeMedH = idadeH / qtdH;
		altMedH = altH / qtdH;
		pesoMedH = pesoH / qtdH;
	}  
	
	if(qtdM != 0){
		idadeMedM = idadeM / qtdM;
		altMedM = altM / qtdM;
		pesoMedM = pesoM / qtdM;
	}
	

		
	puts("\n[HOMENS]\n");
	printf("QUANTIDADE: %d\nIDADE M�DIA: %.0f ANOS\nALTURA M�DIA: %.2f M\nPESO M�DIO: %.2f KG\n",qtdH,idadeMedH,altMedH,pesoMedH);
	
	puts("\n[MULHERES]\n");
	printf("QUANTIDADE: %d\nIDADE M�DIA: %.0f ANOS\nALTURA M�DIA: %.2f M\nPESO M�DIO: %.2f KG",qtdM,idadeMedM,altMedM,pesoMedM);
	
	puts("\n\n[EXIT] PROGRAMA FINALIZADO COM SUCESSO");
	
} // main
