#include<stdio.h>
#define MAX 2

main(){
	int jogador, time, i, j, idade, peso, menor;
	float mediaIdade, alturaMedia, porcentagem, altura;
	
	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			printf("Digite idade, altura e peso: ");
			scanf("%d %f %d", &idade, &altura, &peso);
			mediaIdade = mediaIdade + idade;
			alturaMedia = alturaMedia + altura;
			if(peso > 80)
				porcentagem += 1;
			if(idade < 18)
				menor += 1;
		}
	}
	mediaIdade = mediaIdade / 4;
	alturaMedia = alturaMedia / 4;
	porcentagem = (porcentagem / 4) * 100;
	printf("\nMenores que 18 anos: %d\n", menor);
	printf("Media das idades: %.2lf\n", mediaIdade);
	printf("Media das alturas: %.2lf\n", alturaMedia);
	printf("Porcentagem de jogadores com + de 80kg: %.2lf", porcentagem);
}
