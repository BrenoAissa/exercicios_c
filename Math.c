#include<stdio.h>
#include<math.h>

main(){
	int primeiro, segundo, menu;
	float potencia, raiz1, raiz2, cubica1, cubica2, produto;
	
	printf("Digite o valor do primeiro e segundo numero: ");
	scanf("%d %d", &primeiro, &segundo);
	printf("----------MENU----------\n 1. Primeiro numero elevado ao segundo numero \n 2. Raiz quadrada de cada numero; \n 3. Raiz cubica de cada numero; \n 4. Produto dos numeros");
	printf("\nQual opcao voce deseja?\n");
	scanf("%d", &menu);
	switch(menu){
		case 1:
			potencia = pow(primeiro, segundo);
			printf("%.2lf", potencia);
			break;
		case 2:
			raiz1 = sqrt(primeiro);
			raiz2 = sqrt(segundo);
			printf("%.2lf %.2lf", raiz1, raiz2);
			break;
		case 3:
			cubica1 = cbrt(primeiro);
			cubica2 = cbrt(segundo);
			printf("%.2lf %.2lf", cubica1, cubica2);
			break;
		case 4:
			produto = primeiro * segundo;
			printf("%.2lf", produto);
			break;
		default:
			printf("Escolha uma opcao valida.");
	}
}
