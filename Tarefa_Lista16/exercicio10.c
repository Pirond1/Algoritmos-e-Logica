#include <stdio.h>
#include <conio.h>

void main(){
	char nome[30];
	float alt, alt2 = 0, resp = 1, cont;
	while(resp == 1){
		printf("Informe o Nome da Participante: ");
		scanf("%s", nome);
		printf("Informe a Altura da Participante: ");
		scanf("%f", &alt);
		if(alt > alt2){
			alt2 = alt;
		}
		cont++;
		printf("Deseja Continuar? (1-Sim / 2-Nao): ");
		scanf("%f", &resp);		
	}
	printf("O Numero de Participantes e: %0.0f\n", cont);
	printf("A Altura da Participante mais Alta e: %0.2f", alt2);
	
}
