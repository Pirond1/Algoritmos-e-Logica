#include <stdio.h>
#include <conio.h>

void main(){
	float n1;
	float n2;
	float n3;
	float media;
	printf("Informe Nota 1: ");
	scanf("%f", &n1);
	printf("Informe Nota 2: ");
	scanf("%f", &n2);
	printf("Informe Nota 3: ");
	scanf("%f", &n3);
	media = (n1 + n2 + n3) / 3;
	printf("A Media das Notas Informadas e: %0.2f", media);
}
