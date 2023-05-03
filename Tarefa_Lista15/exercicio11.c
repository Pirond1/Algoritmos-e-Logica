#include <stdio.h>
#include <conio.h>

void main(){
	int n1, n2;
	float media;
	printf("Informe um Numero: ");
	scanf("%d", &n1);
	printf("Informe outro Numero: ");
	scanf("%d", &n2);
	media = (float)(n1 + n2) / 2;
	printf("A media dos Numeros e: %0.2f", media);
}
