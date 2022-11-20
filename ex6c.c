#include <stdio.h>
int parOuImpar(unsigned int number){
	return !(number & (unsigned int)1);
}
void main(){
	printf("\nEntrada: 4\nSaida: %d", parOuImpar(4));
}
