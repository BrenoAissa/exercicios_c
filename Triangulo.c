#include<stdio.h>

main(){
	int A, B, C;
	printf("Digite os valores de A, B e C respectivamente: ");
	scanf("%d %d %d", &A, &B, &C);
	if(A > 0 && B > 0 && C > 0){
		if (A + B > C && C + B > A && C + A > B){
			if(A == B && B == C){
				printf("Equilatero");
			}
			else if(A == B || B == C || C == A){
				printf("Isosceles");
			}
			else{
				printf("Escaleno");
			}
		}
		else{
			printf("Nao forma um triangulo");
		}
	}
	else{
		printf("Erro");
	}
}
