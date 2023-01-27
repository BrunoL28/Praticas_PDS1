#include <stdio.h>
#include <math.h>

//Exercício 1

float paraMetrosPorSegundo(float v){
	float M;
	M = v/3.6;
	return M;
}

//Exercício 2

float areaCirculo(float raio){
	float A;
	A = M_PI * (pow(raio, 2));
	return A;
}

//Exercício 3

float maior3(int n1, int n2, int n3){
	if(n1 >= n2){
		if(n1 >= n3)
			return n1;
	    else			
			return n3;
	}else{
		if(n2 >= n3)
			return n2;
		else 
			return n3;
	}
}

//Exercício 4

int ehPar(int n){
	if(n%2 == 0){
		return 1;
	}else
		return 0;
}

//Exercício 5

int ehDivisivelPor3ou5(int n){
	if(n%3 == 0 ^ n%5 == 0){
		return 1;
	}else if(n%3 == 0 && n%5 ==0){
		return 0;
	}else 
		return 0;
}

//Exercício 6

float pesoIdeal(float h, char sexo){
	float PI;
	if(sexo == 'M'){
		return PI = (72.7 * h)-58;
	}else 
		return PI = (62.1 * h)-44.7;
}

//Exercício 8

int somaImpares(int N){
	int soma = 0;
	int i = 0;
	while(i <= N){
		if(!ehPar(i))
			soma += i;
		i++;
	}
		return soma;
}

//Exercício 9

double fatorial(int N){
	double fat = 1;
	int i = 2;
	while(i <= N){
		fat = fat * 1;
		i++;
	}
	return fat;
}

//Exercício 10

int somaNumerosDiv3ou5(int N){
	int soma = 0;
	int i = 1;
	while(i <= N){
		if(ehDivisivelPor3ou5(i))
			soma += i;
		i++;
	}
		return soma;
}

//Exercício 11

float calculaMedia(int x, int y, int z, int operacao){
	if(operacao == 1){
		return pow((x * y * z), (1.0/3.0));
	}else if(operacao == 2){
		return ((x + 2) * (y + 3) * z)/6;
	}else if(operacao == 3){
		return 3/(1/(x + 1)/(y + 1)/z);
	}else{
		return (x + y + z)/3;
	}
}

//Exercício 12

int numeroDivisores(int N){
	int div = 1;
	int i = 2;
	while(i <= N){
		if(N%i == 0)
			div++;
		i++;
	}
	return div;
}

//Exercício 13

int enesimoFibonacci(int N){
	if(N == 1){
		return 0;
	}if(N == 2){
		return 1;
	}
	int a, b, enesimo;
	int i = 3;
	while(i <= N){
		i++;
		enesimo = a + b;
		a = b;
		b = enesimo;
	}
	return enesimo;
}

//Exercício 14

int mdc(unsigned int x, unsigned int y){
	int menor, maximodc;
	if(x < y)
		menor = x;
	else
		menor = y;
	int i = 2;
	while(i <= menor){
		if(x%i == 0 && y%i == 0)
			maximodc = i;
		i++;
	}
	return maximodc;
}

//Exercício 15

int mmc(unsigned int x, unsigned int y){
	int maior;
	if(x > y)
		maior = x;
	else
		maior = y;
	while(1){
		if(maior%x == 0 && maior%y == 0)
			break;
		maior++;
	}
	return maior;
}
