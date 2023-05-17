#include <stdio.h>
#include <conio.h>

void main(){
	int i = 0, num, tab;
	printf("Informe um Numero para Tabuada: ");
	scanf("%d", &num);
	while (i <= 10){
		tab = num * i;
		printf("%d x %d = %d \n", num, i, tab);
		i++;
	}
}
