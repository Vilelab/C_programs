#include <stdio.h>
int main(void){
	int x, y,fat = 1;
	scanf ("%d", &y);

	// recebe um numero y >= 0 e calcula
	// seu fatorial
	for (x = 1; x <= y; ++x){
		fat *= x;
	}
	printf ("O Fatorial de %d é %d \n", y, fat);
}
