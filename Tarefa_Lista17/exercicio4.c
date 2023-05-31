#include <stdio.h>
#include <conio.h>

void main(){
	int i = 1, contpar = 0, contimpar = 0, numero = 0;
	do{
		printf("Informe um Numero: ");
		scanf("%d", &numero);
		if (numero%2 == 0){
			contpar++;	
		}else{
			contimpar++;
		}
		i++;
	}while(i<=132);
	printf("\nA Quantidade de Numeros Pares e: %d", contpar);
	printf("\nA Quantidade de Numeros Impares e: %d", contimpar);
}

