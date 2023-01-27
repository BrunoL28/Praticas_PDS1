#include <stdio.h>

int main(){
	char texto[128];
	char textoInverso[128];
	char c;
	int i = 0;
	int j;
	printf("\nDigite o texto: \n");
	do{
		c = getc(stdin);
		texto[i] = c;
		i++;
	}while(c != '.');
	j = i - 1;
	textoInverso[i] = '\0';
	i = 0;
	while(j >= 0){
		textoInverso[j] = texto [i];
		j--;
		i++;
	}
	printf("\nO texto digitado acima, quando invertido, eh: %s\n", textoInverso);
	return 0;
}