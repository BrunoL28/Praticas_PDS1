#include <stdio.h>
#include <stdlib.h>

#define TAM_VETOR 1000
#define QTD_NUM 5000000

int main(){
	int vetor_qtd[TAM_VETOR];
	int numero, maior, menor, i, diferenca;
	for(i = 0; i < TAM_VETOR; i++)
		vetor_qtd[i] = 0;
		for(i = 0; i < QTD_NUM; i++){
			do{
				numero = rand();
			}while(numero < 0 || numero > TAM_VETOR - 1);
			vetor_qtd[numero]++;
		}
		maior = vetor_qtd[0];
		menor = vetor_qtd[0];
		for(i = 0; i < TAM_VETOR; i++){
			if(vetor_qtd[i] >= maior)
				maior = vetor_qtd[i];
			if(vetor_qtd[i] <= menor)
				menor = vetor_qtd[i];
		}
		diferenca = maior - menor;
		printf("\nA diferenca entre os dois vetores eh: %d\n", diferenca);
	return 0;
}
