#include <stdio.h>
#include <conio.h>

void main(){
	float idade, altura, soma, media, cont;
	do{
		printf("Informe uma Idade (Negativo para Finalizar): ");
		scanf("%f", &idade);
		if(idade >= 0){
			printf("Informe uma Altura: ");
			scanf("%f", &altura);
			if(idade > 50){
			soma += altura;
			cont++;
			}
		}		
	}while(idade >= 0);
	media = soma / cont;
	printf("\nA Media de Altura de Pessoas com Mais de 50 Anos e: %0.2f", media);
}

