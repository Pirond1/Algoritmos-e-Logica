#include <stdio.h>
#include <conio.h>

void main(){
	int i, matricula;
	float nota, maiorN = 0, maiorM, segundaN = 0, segundaM;
	for(i=1; i<=7; i++){
		printf("Informe o Numero de Matricula: ");
		scanf("%d", &matricula);
		printf("informe a Nota desse Aluno: ");
		scanf("%f", &nota);
		if(nota > maiorN){
			segundaN = maiorN;
			segundaM = maiorM;
			maiorN = nota;
			maiorM = matricula;	
		}else{
			if(nota > segundaN){
				segundaN = nota;
				segundaM = matricula;
			}
		}
	}
	printf("\nA Maior Nota e: %0.2f", maiorN);
	printf("\nO Numero de Matricula desse aluno e: %0.0f", maiorM);
	printf("\nA Segunda Maior Nota e: %0.2f", segundaN);
	printf("\nO Numero de Matricula desse aluno e: %0.0f", segundaM);
}

