#include <stdio.h>
int main(void){
	int fat;
	int temp = 1;
	int  x = 1;
	printf ("Digite o numero a ser calculado o fatorial: ");
	scanf ("%d", &fat);

	// recebe um numero fat >= 0 e calula
	// o fatorial desse numero
	do {
		temp = x * temp;
		x = x + 1;
	} while (x <= fat);
	fat = temp;
	printf ("O fatorial e %d \n:", fat);
}
