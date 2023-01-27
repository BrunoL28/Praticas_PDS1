#include <stdio.h>

#define MAX 2000000000

int main(){
	int repeteco = 1;
	int nota;
	char conceito;
	do{
		do{
			printf("\nDigite o valor da nota: \n");
			scanf("%d", &nota);
			switch(nota){
				case 0 ... 4:
					conceito = 'F';
					break;
				case 5:
					conceito = 'E';
					break;
				case 6:
					conceito = 'D';
					break;
				case 7:
					conceito = 'C';
					break;
				case 8:
					conceito = 'B';
					break;
				case 9 ... MAX:
					conceito = 'A';
					break;
				
				default:
					printf("\nNumero invalido.\n");
					break;
			}
		}while(nota < 0);
			printf("\nConceito: %c\n", conceito);
			printf("\nDeseja repetir o processo? Se sim, digite 1, se nao, digite 0.\n");
			scanf("%d", &repeteco);
	}while(repeteco == 1);
			return 0;
}