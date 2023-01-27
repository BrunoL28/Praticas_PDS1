#include <math.h>
#include "funcao.h"

float cauchy(float x){
	return 1 / ( M_PI * ( 1 + ( x * x )));
}
float gumbel(float x, float mi, float beta){
	float z = ( x - mi ) / beta;
	return ( 1 / beta ) * exp(-(z + exp(-z)));
}
float laplace(float x, float mi, float b){
	return (1 / (2 * b)) * exp((-fabs(x - mi) / b));
}