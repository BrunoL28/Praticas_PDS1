#include <stdio.h>
#include <math.h>

double fatorial(int N){
	double fat = 1;
	int i = 2;
	while(i <= N){
		fat *= i;
		i++;
	}
	return fat;
}

int main(){
	double aux = 1;
	double euler = aux;
	int i;
	for(i = 1; aux > pow(10, -6); i++){
		aux = 1 / fatorial(i);
		euler += aux;
	}
	printf("\nO numero de euler eh: %lf\n", euler);
	return 0;
}
