#include <stdio.h>
#include <math.h>
#include "recursividade.h"

int somaCubos(int n){
	if(n == 1)
		return 1;
	return pow(n, 3) + somaCubos(n -1);
}

void imprimeNaturaisCrescente(int n){
	if(n == 0){
		printf("%d\n", n);
		return;
	}else{
	imprimeNaturaisCrescente(n - 1);
	printf("%d\n", n);
	return;
	}
}

void imprimeNaturaisDecrescente(int n){
	if(n == 0){
		printf("%d\n", n);
		return;
	}else{
	printf("%d\n", n);
	imprimeNaturaisDecrescente(n - 1);
	return;
	}
}

int somaElementos(int *vetor, int n){
	if(n - 1 == 0){
		return vetor[n - 1];
	}else{
		return vetor[n - 1] + somaElementos(vetor, n-1);
	}
}

float mediaElementos(int *vetor, int n, int m){
	if(m == n - 1){
		return (float)vetor[m] / (float)n;
	}else{
		return (float)vetor[m] / (float)n + mediaElementos(vetor, n, (m + 1));
	}
}

int potenciaXY(int x, int y){
	if(y == 0){
		return 1;
	}else{
		return x * potenciaXY(x, y -1);
	}
}

void imprimeString(char *string){
	if(*string == '\0')
		return;
	imprimeString(string + 1);
	printf("%c", *string);
	return;
}

int retornaInvertido(int n, int *aux){
	int resto;
	if(n == 0)
		return 0;
	resto = n % 10;
	*aux *= 10;
	*aux += resto;
	retornaInvertido(n/10, aux);
	return *aux;
}

void imprimeBinario(int n){
	int aux;
	if(n < 2){
		aux = n;
	}else if(n%2 == 0){
		imprimeBinario(n / 2);
		aux = 0;
	}else{
		aux = 1;
	}
	printf("%d", aux);
}

int menorElemento(int *vetor, int n){
	int atual = vetor[n - 1];
	int menor;
	if(n - 1 == 0)
		return vetor[n - 1];
	menor = menorElemento(vetor, n - 1);
	if(menor <= atual)
		return menor;
	return atual;
}