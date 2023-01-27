#include <stdio.h>

int main(){
	char caracteres[128];
	char letra;
	int i = 0;
	printf("\nDigite tantos caracteres quanto forem necessarios, maiusculos ou minusculos.\n");
	do{
		scanf("%c", &letra);
		if(letra >= 97 && letra <= 122){
			letra -= 32;
		}
			caracteres[i] = letra;
			i++;
	}while(letra != '\0' && letra != '\n');
	printf("\nLinha com todos caracteres convertidos para maiusculo: %s\n", caracteres);
	return 0;
}
		
	
	
		    
		
		