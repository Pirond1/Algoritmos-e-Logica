#include <stdio.h>
#include <conio.h>

void main(){
	int sexo, i = 1, contM = 0, contF = 0;
	float altura, somaT, mediaT, somaF, mediaF, maior = 0, menor = 1000000;
	do{
		printf("Informe sua Altura: ");
		scanf("%f", &altura);
		printf("Informe o Codigo do Sexo (1- Masculino / 2- Feminino): ");
		scanf("%d", &sexo);
		if(sexo == 1){
			contM++;
		}
		if(sexo == 2){
			somaF += altura;
			contF++;
		}
		if(altura > maior){
			maior = altura;
		}
		if(altura < menor){
			menor = altura;
		}		
		somaT += altura;
		i++;
	}while(i<=10);
	mediaT = somaT/10;
	mediaF = somaF/contF;
	printf("\nA Maior e a Menor Altura da Turma e: %0.2f e %0.2f", maior, menor);
	printf("\nA Media de Altura das Mulheres e: %0.2f", mediaF);
	printf("\nA Media de Altura da Turma e: %0.2f", mediaT);
	printf("\nA Quantidade de Homens e: %0.0d", contM);
}

