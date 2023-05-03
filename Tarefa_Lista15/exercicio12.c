#include <stdio.h>
#include <conio.h>

void main(){
	float n1, n2, media;
	printf("Informe Nota 1: ");
	scanf("%f", &n1);
	printf("Informe Nota 2: ");
	scanf("%f", &n2);
	media = (n1 + n2) / 2;
	if(media >= 7){
		printf("Aprovado");
		printf("\nNota de Aprovacao: %0.2f", media);
	}
	else{
		printf("Reprovado");
	}
}
