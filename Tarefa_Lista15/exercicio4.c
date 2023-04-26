#include <stdio.h>
#include <conio.h>

void main(){
	float n1;
	float n2;
	float soma;
	printf("Informe um Numero: ");
	scanf("%f", &n1);
	printf("Informe outro Numero: ");
	scanf("%f", &n2);
	soma = n1 + n2;
	printf("A Soma dos 2 Numeros e: %0.2f",soma);
}
