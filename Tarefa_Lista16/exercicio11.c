#include <stdio.h>
#include <conio.h>

void main(){
	char nome[50];
	float largura, comprimento, area;
	int resp = 0;
	
	while (resp != 1){
	printf("Nome do Comodo: ");
	scanf("%s", nome);
	printf("Largura do Comodo: ");
	scanf("%f", &largura);
	printf("Comprimento do Comodo: ");
	scanf("%f", &comprimento);
	area = largura * comprimento;
	printf("Area do Comodo: %0.2f \n", area);
	printf("\nDeseja Continuar? (1-Nao / 2-Sim): ");
	scanf("%d", &resp);
	printf("\n");
	}
}
