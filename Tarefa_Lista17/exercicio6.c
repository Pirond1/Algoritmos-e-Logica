#include <stdio.h>
#include <conio.h>

void main(){
	float numero, maior = -1, menor = 100000000000;
	do{
		printf("Informe um Numero: ");
		scanf("%f", &numero);
		if(numero > 0){
			if(numero > maior){
				maior = numero;
			}
			if(numero < menor){
				menor = numero;
			}				
		}else{
			printf("Esses valores (zero e negativos) nao entrarao nos calculos.\n");
		}	
	}while(numero!=0);
	printf("\nO Maior Numero Informado foi: %0.0f", maior);
	printf("\nO Menor Numero Informado foi: %0.0f", menor);
}

