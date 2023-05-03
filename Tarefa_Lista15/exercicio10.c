#include <stdio.h>
#include <conio.h>

void main(){
	int num, num2;
	printf("Informe um Numero: ");
	scanf("%d", &num);
	printf("Informe outro Numero: ");
	scanf("%d", &num2);
	if ( num > num2){
		printf("%d eh maior", num);
	}
	else{
		if (num == num2){
			printf("Numeros Iguais");
		}
		else{
			printf("%d eh Maior", num2);
		}
	}
}
