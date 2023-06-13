#include <stdio.h>
#include <conio.h>

void main(){
	float salario, maior = 0, menor = 1000000000000, soma, media;
	int i, olhos, sexo, MulherAzul = 0, castanho = 0;
	for(i=1; i<=4; i++){
		printf("Informe o Salario: ");
		scanf("%f", &salario);
		printf("Informe a Cor dos Olhos (1-Azul / 2-Verde / 3-Preto / 4-Castanho): ");
		scanf("%d", &olhos);
		printf("Informe o Sexo (1-Feminino / 2-Masculino): ");
		scanf("%d", &sexo);
		printf("\n");
		if(olhos == 2){
			if(salario > maior){
				maior = salario;
			}
		}
		if(sexo == 2){
			if(salario < menor){
				menor = salario;
			}
		}
		if(sexo == 1 && olhos == 1){
			if(olhos == 1){
				soma += salario;
				MulherAzul++;
			}
		}
		if(olhos == 4){
			castanho++;
		}	
	}
	media = soma / MulherAzul;
	printf("O Maior Salario que Informou a Cor Verde e: %0.2f", maior);
	printf("\nO Menor Salario que Informou o Sexo Masculino e: %0.2f", menor);
	printf("\nA Media Salarial das Mulheres de Olhos Azuis e: %0.2f", media);
	printf("\nA Quantidade de Pessoas que Informaram a Cor Castanho: %d", castanho);
}
