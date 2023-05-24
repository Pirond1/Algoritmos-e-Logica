#include<stdio.h>
#include <conio.h>

void main(){
	float nota1, nota2, media, cont = 0, resp = 1;
	do{
		printf("Informe a Nota 1: ");
		scanf("%f", &nota1);
		printf("Informe a Nota 2: ");
		scanf("%f", &nota2);
		media = (nota1 + nota2)/ 2;
		printf("Media: %0.2f", media);
		if(media >= 7){
			cont++;	
		}
		printf("\nDeseja Continuar? (1-Sim / 2-Nao): ");
		scanf("%f", &resp);
		printf("\n");
	}while(resp == 1);
	printf("A Quantidade de Alunos Aprovados foi: %0.0f", cont);
}
