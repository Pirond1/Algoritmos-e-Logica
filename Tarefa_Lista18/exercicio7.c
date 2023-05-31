#include <stdio.h>
#include <conio.h>

void main (){
	int i, num, maior, menor;
	for(i=1; i <=5; i++){
		printf("Informe um Numero: ");
		scanf("%d", &num);
		if(i == 1){
			maior = num;
			menor = num;
		} 
		if(num > maior){
			maior = num;
		}
		if(num < menor){
			menor = num;
		}
	}
	printf("\nMaior Numero: %d", maior);
	printf("\nMenor Numero: %d", menor);		
}
