#include <stdio.h>
#include <conio.h>

void main(){
	int i = 1;
	while(i <= 10){
		printf("%d ^ %d = %0.0f\n", i, i, pow(i,2));
		i ++;
	}
}
