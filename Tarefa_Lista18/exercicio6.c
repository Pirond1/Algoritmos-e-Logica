#include <stdio.h>
#include <conio.h>

void main (){
	int i, num, cont_neg = 0, soma_pos = 0;
	for (i=1; i <= 5; i++){
		printf("Informe um Numero: ");
		scanf("%d", &num);
		if(num >= 0){ /* Positivo */
			soma_pos += num; /* Acumulador */
		}
		else{ /* Negativo */
			cont_neg++; /* Contador */
		}
	}
	printf("\nSoma dos Positivos: %d", soma_pos);
	printf("\nQtde de Negativos: %d", cont_neg);
}
