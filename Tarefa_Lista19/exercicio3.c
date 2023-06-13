#include <stdio.h>
#include <conio.h>

void main(){
	int i = 1, matricula, frequencia, reprovado = 0;
	float nota1, nota2, nota3, notafinal, maior = 0, menor = 100, soma = 0, media, mediafalta, falta = 0;
	do{
		
		printf("Informe o Numero da Matricula: ");
		scanf("%d", &matricula);
		printf("Informe a Nota 1: ");
		scanf("%f", &nota1);
		printf("Informe a Nota 2: ");
		scanf("%f", &nota2);
		printf("Informe a Nota 3: ");
		scanf("%f", &nota3);
		printf("Informe a Frequencia: ");
		scanf("%d", &frequencia);
		
		notafinal = (nota1 + nota2 + nota3) / 3;
		if(notafinal > maior){
			maior = notafinal;
		}
		if(notafinal < menor){
			menor = notafinal;
		}
		if(notafinal >= 6 && frequencia >= 40){
			printf("\nAprovado");
		}else{
			printf("\nReprovado");
			reprovado++;
			if(frequencia < 40){
				falta++;
			}
		}
		printf("\nA Nota final do Aluno e: %0.2f \n", notafinal);
		printf("\n");
		
		soma += notafinal;
		i++;
	}while(i<=10);
	media = soma / 10;
	mediafalta = (falta/10) * 100;
	printf("A Maior Nota da Turma foi: %0.2f", maior);
	printf("\nA Menor Nota da Turma foi: %0.2f", menor);
	printf("\nA Media da Turma e: %0.2f", media);
	printf("\nA Quantidade de Alunos Reprovados foi: %d", reprovado);
	printf("\nA porcentagem de Alunos Reprovados por falta foi: %0.2f", mediafalta);
}

