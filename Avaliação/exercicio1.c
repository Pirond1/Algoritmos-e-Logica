#include <stdio.h>
#include <conio.h>

void main(){
	float n1, n2, sub, div, soma, mult;
	int lista, confirmar = 0;
	do{
		printf("<<<Menu>>>\n");
		printf("\n1-Subtracao");
		printf("\n2-Divisao");
		printf("\n3-Soma");
		printf("\n4-Multiplicacao\n");
		printf("\nInforme a Operacao Desejada: ");
		scanf("%d", &lista);
		if(lista == 1){
			printf("\n<<<Subtracao>>>\n");
			printf("\nInforme N1: ");
			scanf("%f", &n1);
			printf("Informe N2: ");
			scanf("%f", &n2);	
			sub = n1 - n2;
			printf("A Subtracao desses Numeros e: %0.2f\n", sub);
		}else{
			if(lista == 2){
				printf("\n<<<Divisao>>>\n");
				printf("\nInforme N1: ");
				scanf("%f", &n1);
				printf("Informe N2: ");
				scanf("%f", &n2);
				div = n1 / n2;
				if(n2 == 0){
					div = 0;
				}
				printf("A Divisao desses Numeros e: %0.2f\n", div);
			}else{
				if(lista == 3){
					printf("\n<<<Soma>>>\n");
					printf("\nInforme N1: ");
					scanf("%f", &n1);
					printf("Informe N2: ");
					scanf("%f", &n2);
					soma = n1 + n2;
					printf("A Soma desses Numeros e: %0.2f\n", soma);	
				}else{
					if(lista == 4){
						printf("\n<<<Multiplicacao>>>\n");
						printf("\nInforme N1: ");
						scanf("%f", &n1);
						printf("Informe N2: ");
						scanf("%f", &n2);
						mult = n1 * n2;
						printf("A Multiplicacao desses Numeros e: %0.2f\n", mult);	
					}else{
						printf("\nOperacao Invalida!\n");
						}	
					}	
				}	
			}
		printf("\nDeseja Continuar? (1-Continuar / 2-Finalizar): ");
		scanf("%d", &confirmar);
		printf("\n");
	}while(confirmar != 2);
}

