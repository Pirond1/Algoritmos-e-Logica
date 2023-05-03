#include <stdio.h>
#include <conio.h>

void main(){
	float atual;
	float nasci;
	float idade;
	printf("Informe o Ano Atual: ");
	scanf("%f", &atual);
	printf("Informe o Ano de Nascimento: ");
	scanf("%f", &nasci);
	idade = atual - nasci;
	printf("A idade Informada e: %0.0f anos", idade);
}
