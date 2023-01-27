#include <stdio.h>
#include "funcao.h"

int main(){
	printf("O resultado de Cauchy(-2) eh: %f\n", cauchy(-2));
	printf("O resultado de Gumbel(0, 0.5, 2) eh: %f\n", gumbel(0, 0.5, 2));
	printf("O resultado de Laplace(-6, -5, 4) eh: %f\n", laplace(-6, -5, 4));
	return 0;
}
	
