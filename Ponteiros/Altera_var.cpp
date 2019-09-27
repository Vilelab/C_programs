#include <stdio.h>
int main(void){
	int varX = 10;
	int *pt_varX;
	
	pt_varX = &varX;
	printf("%d \n", varX); // imprime a varX, que e igual a 10
	
	*pt_varX = 20; // alterei o valor de varX indiretamente! Isso e possivel por intermedio do ponteiro
	printf("%d", varX); // imprimo o novo valor de varX, que e igual a 20
	
}
