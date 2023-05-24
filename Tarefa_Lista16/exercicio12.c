#include <stdio.h>
#include <conio.h>

void main(){
	float idade = 1, cont, soma = 0, media;
	
	while(idade != 0){
	
	printf("Informe uma Idade (0 Para Finalizar): ");
	scanf("%f", &idade);
	if (idade != 0){
		cont++;
		soma = soma + idade;
		printf("<IDADE COMPUTADA>\n");
		printf("\n");
	}
	}
	media = soma / cont;	
	printf("A Quantidade de Idades Lidas foi: %0.0f", cont);
	printf("\nA Media das Idades foi: %0.2f", media);
}
