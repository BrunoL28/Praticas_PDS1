#include <stdio.h>
#include <math.h>
#include "pratica4.h"

void main(){
	float p, h, PI;
    char sexo;
		printf("\nDigite seu sexo: M ou F: \n");
		scanf("%c", &sexo);
		printf("\nDigite sua altura (em metros): \n");
		scanf("%f", &h);
		printf("\nDigite o seu peso atual (em quilogramas): \n");
		scanf("%f", &p);
		PI = pesoIdeal(h, sexo);
		if(fabs(PI - p)<= 0.001)
			printf("\nParabens! Voce esta no seu peso ideal.\n");
		else if(PI > p)
		    printf("\nVoce precisa ganhar %f quilos.\n", PI - p);
		else
			printf("\nVoce precisa perder %f quilos.\n", p - PI);
}