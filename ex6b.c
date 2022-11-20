#include <stdio.h>
int soma1SePar(unsigned int number){
	return number | (unsigned int)1;
}
void main(){
	printf("\nEntrada 7\nSaida: %d", soma1SePar(7));
}