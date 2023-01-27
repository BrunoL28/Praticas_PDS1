#include <stdio.h>
#include "recursividade.h"

int main(int argc, char **argv){
	int a[1] = {8};
	int b[6] = {8, 8, 8, 8, 8, 8};
	int c[6] = {5, 34, 43, 65, 4, 7};
	int d[2] = {50, 100};

	printf("\nTestes Exercicio 1: \n");
	
	printf("\nSoma dos cubos ate 1: %d\n", somaCubos(1));
	printf("\nSoma dos cubos ate 3: %d\n", somaCubos(3));
	printf("\nSoma dos cubos ate 7: %d\n", somaCubos(7));
	printf("\nSoma dos cubos ate 12: %d\n", somaCubos(12));
	
	printf("\nTestes Exercicio 2: \n");
	
	printf("\nNumeros naturais, em ordem crescente, de 0 a 1:\n");
	imprimeNaturaisCrescente(1);
	printf("\nNumeros naturais, em ordem crescente, de 0 a 45:\n");
	imprimeNaturaisCrescente(45);
	printf("\nNumeros naturais, em ordem crescente, de 0 a 100:\n");
	imprimeNaturaisCrescente(100);
	printf("\nNumeros naturais, em ordem crescente, de 0 a 250:\n");
	imprimeNaturaisCrescente(250);
	
	printf("\nTestes Exercício 3: \n");
	
	printf("\nNumeros naturais, em ordem decrescente, de 1 a 0:\n");
	imprimeNaturaisDecrescente(1);
	printf("\nNumeros naturais, em ordem decrescente, de 45 a 0:\n");
	imprimeNaturaisDecrescente(45);
	printf("\nNumeros naturais, em ordem crescente, de 100 a 0:\n");
	imprimeNaturaisDecrescente(100);
	printf("\nNumeros naturais, em ordem crescente, de 250 a 0:\n");
	imprimeNaturaisDecrescente(250);

	printf("\nTestes Exercicio 4: \n");
	
	printf("\nSoma entre os elementos do vetor: %d\n", somaElementos(a, 1));
	printf("\nSoma entre os elementos do vetor: %d\n", somaElementos(b, 6));
	printf("\nSoma entre os elementos do vetor: %d\n", somaElementos(c, 6));
	printf("\nSoma entre os elementos do vetor: %d\n", somaElementos(d, 2));
	
	printf("\nTestes Exercicio 5: \n");
	
	printf("\nMedia entre os elementos do vetor: %.2f\n", mediaElementos(a, 1, 0));
	printf("\nMedia entre os elementos do vetor: %.2f\n", mediaElementos(b, 6, 0));
	printf("\nMedia entre os elementos do vetor: %.2f\n", mediaElementos(c, 6, 0));
	printf("\nMedia entre os elementos do vetor: %.2f\n", mediaElementos(d, 2, 0));
	
	printf("\nTestes Exercicio 6: \n");
	
	printf("\nResultado da exponenciacao entre 2 e 4: %d\n", potenciaXY(2, 4));
	printf("\nResultado da exponenciacao entre 2 e 5: %d\n", potenciaXY(2, 5));
	printf("\nResultado da exponenciacao entre 6 e 4: %d\n", potenciaXY(6, 4));
	printf("\nResultado da exponenciacao entre 8 e 9: %d\n", potenciaXY(8, 9));

	printf("\nTestes Exercicio 7: \n");
	
	printf("\nString 'Brasil, pais tropical', invertida: ");
	imprimeString("Brasil, pais tropical");
	printf("\nString 'Brasil, pais de corrupcao', invertida: ");
	imprimeString("Brasil, pais de corrupcao");
	printf("\nString 'Ola, meu nome eh Bruno', invertida: ");
	imprimeString("Ola, meu nome eh Bruno");
	printf("\nString 'Meu nome possui cinco letras', invertida: ");
	imprimeString("Meu nome possui cinco letras");

	printf("\nTestes Exercicio 8: \n");
	
	int resultado;
	
	resultado = 0;
	printf("\nO numero 435 invertido eh: %d\n", retornaInvertido(435, &resultado));
	resultado = 0;
	printf("\nO numero 67809 invertido eh: %d\n", retornaInvertido(67809, &resultado));
	resultado = 0;
	printf("\nO numero 108327 invertido eh: %d\n", retornaInvertido(108327, &resultado));
	resultado = 0;
	printf("\nO numero 327045576 invertido eh: %d\n", retornaInvertido(327045576, &resultado));
	
	printf("\nTestes Exercicio 9: \n");
	
	printf("\nO numero 2 em binario: "); 
	imprimeBinario(2);
	printf("\nO numero 15 em binario: "); 
	imprimeBinario(15);
	printf("\nO numero 30 em binario: "); 
	imprimeBinario(30);
	printf("\nO numero 100 em binario: "); 
	imprimeBinario(100);

	printf("\nTestes Exercicio 10: \n");
	
	printf("\nO menor elemento do vetor eh: %d", menorElemento(a, 1)); 
	printf("\nO menor elemento do vetor eh: %d", menorElemento(b, 6)); 
	printf("\nO menor elemento do vetor eh: %d", menorElemento(c, 6)); 
	printf("\nO menor elemento do vetor eh: %d", menorElemento(d, 2)); 
	
	return 0;	
}