#include <stdio.h>
#include "pratica4.h"

int main(){
	int first, second;
	do{
		printf("\nDigite o primeiro numero: \n");
		scanf("%d", &first);
		if(first < 1)
			printf("\nNumero invalido, digite novamente.\n");
	}while(first < 1);
	do{
		printf("\nDigite o segundo numero: \n");
		scanf("%d", &second);
		if(second < 1)
			printf("\nNumero invalido, digite novamente.\n");
	}while(second < 1);
	printf("\nO MDC entre %d e %d eh: %d\n", first, second, mdc(first, second));
	printf("\nO MMC entre %d e %d eh: %d\n", first, second, mmc(first, second));
	return 0;
}