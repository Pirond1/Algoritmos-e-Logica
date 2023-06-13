#include <stdio.h>
#include <conio.h>

void main(){
	int i, idade, nota, maiorp, maioro, maiorru, maiorT;
	float otimo = 0, bom = 0, regular = 0, ruim = 0,pessimo = 0, somaruim = 0, mediaruim = 0;
	float mediabom = 0, mediaregular = 0, diferencabr = 0, mediapessimo = 0;
	while(i < 6){
		printf("Informe sua Idade: ");
		scanf("%d", &idade);
		printf("Informe sua Nota (1 - 5): ");
		scanf("%d", &nota);
		if(nota == 1){
			otimo++;
			if(idade > maioro){
				maioro = idade;
			}
		}
		if(nota == 2){
			bom++;
			
		}
		if(nota == 3){
			regular++;
		}
		if(nota == 4){
			ruim++;
			somaruim += idade;
			if(idade > maiorru){
				maiorru = idade;
			}
		}
		if(nota ==5){
			pessimo++;
			if(idade > maiorp){
				maiorp = idade;
			}
		}
		i++;
	}
	mediabom = bom / 6 * 100;
	mediaregular = regular / 6 * 100;
	diferencabr = mediabom - mediaregular;
	mediaruim = somaruim / ruim;
	mediapessimo = pessimo / 6 * 100;
	maiorT = maioro - maiorru;
	if(ruim == 0){
		mediaruim = 0;
		/*Se eu n fizesse isso ficava -1 */
	}
	printf("\nA Quantidade de Respostas 'Otimo' e: %0.0f", otimo);
	printf("\nA Diferenca Percentual entre 'Bom' e 'Regular' foi: %0.2f", diferencabr);	
	printf("\nA Media de Idade das Pessas que Respoderam 'Ruim' e: %0.0f", mediaruim);
	printf("\nA Percentagem de Respostas 'Pessimo' foi: %0.2f", mediapessimo);
	printf("\nA Maior Idade de quem Respondeu 'Pessimo' foi: %d", maiorp);
	printf("\nA Diferenca entre a Maior Idade 'Otimo' e a Maior Idade 'Ruim' e: %d", maiorT);
}

