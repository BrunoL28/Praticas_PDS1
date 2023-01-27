#include <stdio.h>
#include "pratica4.h"

void main(){
	printf("\nO peso ideal para um homem, de 1.70 de altura eh: %f\n", pesoIdeal(1.70, 'M'));
	printf("\nO peso ideal para uma mulher, de 1.70 de altura eh: %f\n", pesoIdeal(1.70, 'F'));
	printf("\nO peso ideal para um homem, de 1.96 de altura eh: %f\n", pesoIdeal(1.96, 'M'));
	printf("\nO peso ideal para uma mulher, de 1.96 de altura eh: %f\n", pesoIdeal(1.96, 'F'));
}