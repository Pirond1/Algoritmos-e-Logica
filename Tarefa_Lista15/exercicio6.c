#include <stdio.h>
#include <conio.h>

void main(){
	int n1, n2, n3;
	float div;
	printf("Informe N1: ");
	scanf("%d", &n1);
	printf("Informe N2: ");
	scanf("%d", &n2);
	printf("Informe N3: ");
	scanf("%d", &n3);
	div = (float)(n1 - n2) / (float)n3;
	printf("O resultado das operacoes e: %0.2f", div);
}
