#include <stdio.h>
#include <conio.h>
int main() {
	int alg1;
	int alg2;
	int alg3;
	int alg4;
	int alg5;
	int alg6;
	int alg7;
	int alg8;
	int alg9;
	int soma1;
	int soma2;
	int resto1;
	int resto2;
	int dezveri;
	int univeri;
	printf("digite o algarismo da unidade:");
	scanf("%d", &alg1);
	printf("digite o algarismo da dezena:");
	scanf("%d", &alg2);
	printf("digite o algarismo da centena:");
	scanf("%d", &alg3);
	printf("digite o algarismo da unidade de milhar:");
	scanf("%d", &alg4);
	printf("digite o algarismo da dezena de milhar:");
	scanf("%d", &alg5);
	printf("digite o algarismo da centena de milhar:");
	scanf("%d", &alg6);
	printf("digite o algarismo da unidade de milhao:");
	scanf("%d", &alg7);
	printf("digite o algarismo da dezena de milhao:");
	scanf("%d", &alg8);
	printf("digite o algarismo da centena de milhao:");
	scanf("%d", &alg9);
	soma1 = (alg1 * 2) + (alg2 * 3) + (alg3 * 4) + (alg4 * 5) + (alg5 * 6) + (alg6 * 7) + (alg7 * 8) + (alg8 * 9) + (alg9 * 10);
	resto1 = soma1 % 11;
	if (resto1 == 0){
	    dezveri = 0;
		printf("a dezena do digito verificador eh: %d\n", dezveri);
	}else if (resto1 == 1){
		dezveri = 0;
	    printf("a dezena do digito verificador eh: %d\n", dezveri);
	}else{
		dezveri = 11 - resto1;
		printf("a dezena do digito verificador eh: %d\n", dezveri);
	}
	soma2 = (dezveri * 2) + (alg1 * 3) + (alg2 * 4) + (alg3 * 5) + (alg4 * 6) + (alg5 * 7) + (alg6 * 8) + (alg7 * 9) + (alg8 * 10) + (alg9 * 11);
	resto2 =  soma2 % 11;
	if (resto2 == 0){
        univeri = 0;
	    printf("a unidade do digito verificador eh: %d\n", univeri);
	}else if (resto2 == 1){
		univeri = 0;
		printf("a unidade do dígito verificador eh: %d\n", univeri);
	}else{
	univeri = 11 - resto2;
	printf("a unidade do digito verificador eh: %d", univeri);
	}
	return 0;
}

