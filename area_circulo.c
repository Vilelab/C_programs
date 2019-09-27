#include <stdio.h>

int main (void){

	float raio, area;
	float pi = 3.14;
	printf ("Digite o valor do raio: ");
	scanf ("%f", &raio);

	// recebe um raio raio e calcula
	// o valor da area do circulo
	area = pi * raio * raio;
	
	printf ("\n");
	printf ("Raio: %f \n", raio);
	printf ("Área: %f \n", area);
	return 0;
}
