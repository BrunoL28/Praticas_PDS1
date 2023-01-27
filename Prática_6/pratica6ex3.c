#include <stdio.h>

int main(){
	int N;
	printf("\nDigite o valor de n: \n");
	scanf("%d", &N);
	int i, j;
	int k = 1;
	for(i = 1; i <= N; i++){
		for(j = 1; j <= i; j++){
			printf("%d", k);
			k++;
		}
		printf("\n");
	}
	return 0;
}