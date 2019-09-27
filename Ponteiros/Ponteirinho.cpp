#include <stdio.h>
int main(void){
	int *p = 0;
	printf("%p\n", p);
	
	p += 1;
	printf("%p\n", p); // note que o incremento se da em Bytes, sendo um numero inteiro sao 4
	
}

