#include <stdio.h>
#include <conio.h>

void main (){
	int i, cor_olho, qtde_olhos_pretos = 0, cont_turma = 0, cont_azul = 0;
	float salario, maior_salario, salario_turma, salario_azul = 0, media_salario_turma, media_salario_azul;
	for(i=1; i<=5; i++){
		printf("Informe o Salario: ");
		scanf("%f", &salario);
		printf("Informe a Cor do Olho (1-Azul / 2-Preto): ");
		scanf("%d", &cor_olho);
		/* Qntd Olhos Pretos */
		if(cor_olho == 2){
			qtde_olhos_pretos++;
		}
		/* Maior Salário */
		if(salario > maior_salario){
			maior_salario = salario;	
		}
		/* Salário com Olhos Azuis */
		if(cor_olho == 1){
			cont_azul++;
			salario_azul += salario;
		}
		/* Salário Turma */
		cont_turma++;
		salario_turma += salario;	
	}
	/* Media de Salário com Olhos Azuis */
	media_salario_azul = salario_azul / cont_azul;
	/* Media de Salário Turma */
	media_salario_turma	= salario_turma / cont_turma;
	
	printf("O Maior Salario Informado é: %0.2f\n", maior_salario);
	printf("A Media de Salario com Olhos Azuis e: %0.2f\n", media_salario_azul);
	printf("A Media de Salario da Turma e: %0.2f\n", media_salario_turma);
	printf("A Quantidade de Pessoas com Olhos Pretos e: %d\n", qtde_olhos_pretos);
}
