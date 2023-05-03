#include <stdio.h>
#include <conio.h>

void main(){
	float idade, meses, dias, horas, min, sec;	
	printf("Informe sua Idade: ");
	scanf("%f", &idade);
	meses = idade * 12;
	dias = meses * 30;
	horas = dias * 24;
	min = horas * 60;
	sec = min * 60;
	printf("A Pessoa ja Viveu: %0.0f meses, %0.0f dias, %0.0f horas, %0.0f minutos ou %0.0f segundos", meses,dias,horas,min,sec);
}
