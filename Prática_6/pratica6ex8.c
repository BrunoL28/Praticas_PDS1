#include <stdio.h>

int main(){
	char nome[128];
	char c;
	printf("\nDigite o nome completo, com ponto final: \n");
	do{
		c = getc(stdin);
		if(c >= 65 && c <= 90){
			printf("%c.", c);
		}
	}while(c != '.');
	printf("\n");
	return 0;
}