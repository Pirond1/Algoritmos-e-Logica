#include <stdio.h>
#include <conio.h>

void main(){
	char nome[20];
	char sobrenome[20];
	printf("Informe seu Nome: ");
	scanf("%s", nome);
	printf("Informe seu Sobrenome: ");
	scanf("%s", sobrenome);
	printf("Nome Informado: %s %s", nome, sobrenome);
}
