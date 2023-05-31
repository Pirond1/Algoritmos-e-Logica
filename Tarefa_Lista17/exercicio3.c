#include <stdio.h>
#include <conio.h>

void main(){
	float i = 1, idade, contmaior;
	do{
		printf("Informe uma Idade: ");
		scanf("%f", &idade);
		if (idade >= 0){
			if(idade >= 18){
				contmaior++;
			}	
		}else{
			printf("Idade Invalida!\n");
			printf("\n");
			i = i - 1;
		}	
		i++;	
	}while(i<=10);
	printf("\nA Quantidade de Pessoas Maiores de Idade Sao: %0.0f", contmaior);
}

