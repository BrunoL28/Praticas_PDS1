#include <stdio.h>

int main(){
	char linha[128];
	printf("\nDigite uma linha: \n");
	fgets(linha, 128, stdin);
	int size = 0;
		for(int i = 0; linha[i] != '\0' && linha[i] != '\n'; i++){
			size++;
	}
	printf("\nA linha digitada possui %d caracteres.\n", size);
	return 0;
}