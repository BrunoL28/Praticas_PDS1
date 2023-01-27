#include <stdio.h>

int main(){
	char caracteres[128];
	char testeLetra;
	int i = 0;
	int palindromo = 1;
	int j, k;
	printf("\nDigite ate cento e vinte oito caracteres: \n");
//codigo asc de maiusculas se difere de minusculas, por isso é importante a conversão
//para que uma palavra como Arara seja reconhecida como palindromo
	do{
		scanf("%c", &testeLetra);
		if(testeLetra >= 97 && testeLetra <= 122)
			testeLetra -= 32;
		caracteres[i] = testeLetra;
		i++;
	}while(testeLetra != '\0' && testeLetra != '\n');
	j = i - 2;
	k = j / 2;
	i = 0;
	while(j >= k){
		if(caracteres [j] != caracteres [i]){
			palindromo = 0;
			break;
		}
		j--;
		i++;
	}
	if(palindromo){
		printf("\nEh um palindromo!\n");
	}else
		printf("\nNao eh um palindromo!\n");
	return 0;
}