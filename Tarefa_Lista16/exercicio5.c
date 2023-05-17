#include <stdio.h>
#include <conio.h>

void main(){
	int i = 1, soma = 0;
	while(i <= 20){
		if(i % 2 == 0){ /* Somente Pares */
			soma+= i;				
		}
		i ++;	
	}
	printf("Soma dos Pares = %d", soma);
}
