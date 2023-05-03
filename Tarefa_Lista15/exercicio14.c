#include <stdio.h>
#include <conio.h>

void main(){	
	float n1, n2, n3;
	printf("Informe N1: ");
	scanf("%f", &n1);
	printf("Informe N2: ");
	scanf("%f", &n2);
	printf("Informe N3: ");
	scanf("%f", &n3);
	if (n1 > n2 && n1 > n3){
 		printf("O Maior Numero e: %0.2f", n1);
	}
	else
		if (n2 > n1 && n2 > n3){
			printf("O Maior Numero e: %0.2f", n2);	
		}
		else
			if (n3 > n1 && n3 > n2){
				printf("O Maior Numero e: %0.2f", n3);
			}
			else
				if(n1 == n2 && n1 == n3){
					printf("Todos os Numeros Iguais");
				}
				else
					if(n1 == n2 && n1 > n3){
						printf("N1 e N2 Iguais", n1, n2);
					}
					else
						if(n2 == n3 && n2 > n1){
							printf("N2 e N3 Iguais");
						}
						else
							printf("N1 e N3 Iguais");		
	}

