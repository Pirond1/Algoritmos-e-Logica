#include<stdio.h>
#include <conio.h>

void main(){
  	
  	float conta = 1, saldo = 0, negativados;
  	int i = 0, qtde = 0;
  	
  	while(conta >= 0){
  		printf("Informe o nuhmero da conta: ");
  		scanf("%f", &conta);
  		if(conta >= 0){
		
			printf("Informe o saldo da conta: ");
	  		scanf("%f", &saldo);
	  		
	  		if(saldo > 0){
	  			printf("Conta : %0.0f\n", conta);
	  			printf("Saldo : %0.2f\n", saldo);
	  			printf("Saldo Positivo!!!\n");
			} 
			else 
				if (saldo < 0){
				  	printf("Conta : %0.0f\n", conta);
		  			printf("Saldo : %0.2f\n", saldo);
		  			printf("Saldo Negativo!!!\n");
		  			i++;
			  	} 
			  	else{
			  		printf("Conta : %0.0f\n", conta);
	  				printf("Saldo : %0.2f\n", saldo);
	  				printf("Sem saldo!!!\n");
			  	}
			qtde++;	
		}
		
	}
	negativados = (float) (i / qtde) * 100; 
	printf("Clientes negativados: %0.0f %% \n", negativados);

 }
