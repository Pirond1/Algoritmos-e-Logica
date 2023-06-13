#include <stdio.h>
#include <conio.h>

void main(){
	int confirmar = 1, numero, sexo, par = 0, MasculinoNegativo = 0, cont = 0;
	float saldo, soma;
	while(confirmar != 2){
		cont++;
		printf("Informe o Numero Inteiro Preferido: ");
		scanf("%d", &numero);
		printf("Informe o Saldo Bancario Atual: ");
		scanf("%f", &saldo);
		printf("Informe o Sexo (1-Masculino / 2-Feminino): ");
		scanf("%d", &sexo);
		if(numero % 2 == 0){
			printf("\nNumero Preferido Par!");
			par++;
		}else{
			printf("\nNumero Preferido Impar!");
			}
		if(saldo > 0){
			printf("\nSaldo Positivo!\n");
		}else{
			if(saldo == 0){
				printf("\nSaldo Zerado!\n");
			}else{
				printf("\nSaldo Negativo!\n");
				}
			}
		if(sexo == 1 && saldo < 0){
			MasculinoNegativo++;
		}
		soma += saldo;
		
		printf("\nContinuar?(1-Sim / 2-Nao): ");
		scanf("%d", &confirmar);
		printf("\n");
	}
	printf("A Quantidade de Numeros Pares e: %d", par);
	printf("\nA Quantidade de Homens com Saldo Negativo e: %d", MasculinoNegativo);
	printf("\nA Quantidade de Participantes e: %d", cont);
	printf("\nO Saldo Acumulado de Todos os Participantes e: %0.2f", soma);
}
