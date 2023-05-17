#include <stdio.h>
#include <conio.h>

void main(){
	int i = 50, soma = 0;
	while(i <= 80){
		if(i % 2 == 0){ /* Somente Pares */
			soma+= i;				
		}
		i ++;	
	}
	printf("Soma dos Pares = %d", soma);
}
