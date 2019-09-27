#include <stdio.h>

double quadrado (double x); // declarando a funcao... cabecalho

int main(void){
	double a, q;
	scanf ("\n %lf", &a);
	q = quadrado ( a );
	printf ("\n%lf \n", q);
	return (0);
}

//implementacao da funcao
double quadrado (double x){
	return (x * x); // a funcao retorna um valor double
}
