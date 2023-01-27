#include <stdio.h>
#include "pratica4.h"

void main(){
	printf("\nA media geometrica entre 10, 20 e 30 eh: %f\n", calculaMedia(10, 20, 30, 1));
	printf("\nA media ponderada entre 10, 20 e 30 eh: %f\n", calculaMedia(10, 20, 30, 2));
	printf("\nA media harmonica entre 10, 20 e 30 eh: %f\n", calculaMedia(10, 20, 30, 3));
	printf("\nA media aritmetica entre 10, 20 e 30 eh: %f\n", calculaMedia(10, 20, 30, 4));
}