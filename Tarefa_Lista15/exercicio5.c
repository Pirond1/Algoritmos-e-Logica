#include <stdio.h>
#include <conio.h>

void main(){
	float n1;
	float n2;
	float n3;
	float n4;
	float mult;
	printf("Informe N1: ");
	scanf("%f", &n1);
	printf("Informe N2: ");
	scanf("%f", &n2);
	printf("Informe N3: ");
	scanf("%f", &n3);
	printf("Informe N4: ");
	scanf("%f", &n4);
	mult = n1 * n2 * n3 * n4;
	printf("A Multiplicacao dos Numeros Informados e: %0.2f", mult);
}
