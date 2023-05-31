#include <stdio.h>
#include <conio.h>

void main(){
    float i = 1, conta, saldo, contnegativo = 0, contcliente = 0, soma;
    char nome[50];
    do{
    	if(conta != -999){
        	printf("Informe o Numero da Conta (-999 para Finalizar): ");
        	scanf("%f", &conta);
        	if(conta != -999){
        		printf("Inform o Nome do Titular da Conta: ");
        		scanf("%s", nome);
        		printf("Informe o Saldo da Conta: ");
        		scanf("%f", &saldo);
        		soma += saldo;
				printf("\nNumero da Conta Informado: %0.0f", conta);
				printf("\nSaldo da Conta: %0.2f", saldo);
				if(saldo >= 0){
					printf("\nSaldo Positivo!\n");
					printf("\n");
				}else{
					printf("\nSaldo Negativo!\n");
					printf("\n");
					contnegativo++;
				}
				contcliente++;		
			}
        }
        i++;   
    }while(i<=10);
	printf("\nA Quantidade de Clientes Negativados e: %0.0f", contnegativo);
	printf("\nA Quantidade de Clientes na Agencia e: %0.0f", contcliente);
	printf("\nO Saldo Total de Todos os Cliente Somados e: %0.2f", soma);	  
}
