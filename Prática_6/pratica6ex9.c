#include <stdio.h>

int main(){
	char nome[128];
	char c;
	int i = 0;
	int espaco = 1;
	printf("\nDigite o nome completo, com ponto final: \n");
	do{
		c = getc(stdin);
		nome[i] = c;
		i++;
		if(c >= 65 && c <= 90){
			printf("%c.", c);
		}
	}while(c != '.' && c != '\n');
	while(nome[i] != '.'){
		if(nome[i] == ' ')
			espaco = 1;
		else if(espaco == 1){
			if(nome[i] == 'd' || nome[i] == 'D'){
				if(nome[i + 1] == 'e' || nome[i + 1] == 'E'){
					if(nome[i + 2] == ' ')
						i += 1;
				}else if(nome[i + 1] == 'a' || nome[i + 1] == 'A'){
					if(nome[i + 2] == ' ')
						i += 1;
					else if(nome[i + 2] == 's' || nome[i + 2] == 'S')
						if(nome[i + 3] == ' ')
							i += 2;
				}else if(nome[i + 1] == 'o' || nome[i + 1] == 'O'){
					if(nome[i + 2] == ' ')
						i += 1;
					else if(nome[i + 2] == 's' || nome[i + 2] == 'S')
						if(nome[i + 3] == ' ')
							i += 2;
				}
			}
  			else if(nome[i] >= 97 && nome[i] <= 122)
				printf("%c.", nome[i] - 32);
			else 
				printf("%c.", nome[i]);
			espaco = 0;
	}
		i++;
	}
	printf("\n");
	return 0;
}