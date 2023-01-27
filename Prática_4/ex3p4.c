#include <stdio.h>
#include "pratica4.h"

void main(){
	printf("\nO maior inteiro, entre 4, 7 e 15 eh: %f\n", maior3(4, 7, 15));
	printf("\nO maior inteiro, entre 100, 101 e 102 eh: %f\n", maior3(100, 101, 102));
	printf("\nO maior inteiro, entre 900000, 9070000 e 876543 eh: %f\n", maior3(900000, 9070000, 876543));
}