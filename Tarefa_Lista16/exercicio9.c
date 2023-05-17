#include <stdio.h>
#include <conio.h>

void main(){
	int i, soma = 0;
	printf("Informe um Numero: ");
	scanf("%d", &i);
	while(soma <= 99){
		soma = soma + i;		
	}
	printf("Soma -> %d\n", soma);
}
