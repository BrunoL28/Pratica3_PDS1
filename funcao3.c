#include <stdio.h>
float parteInteira(float x){
   return (int)x;	
}
float parteFracionaria(float x){
	return x - (int)x;
}
float divInts(int x, int y){
	return (float)x/(float)y;
}

void main(){
	printf("\nEntrada 4.7629876\nSaida: %f\n", parteInteira(4.7629876));
	printf("\nEntrada 5.8974324\nSaida: %f\n", parteInteira(5.8974324));
	printf("\nEntrada 9.6345679\nSaida: %f\n", parteInteira(9.6345679));
	printf("\nEntrada 4.7629876\nSaida: %f\n", parteFracionaria(4.7629876));
	printf("\nEntrada 5.8974324\nSaida: %f\n", parteFracionaria(5.8974324));
	printf("\nEntrada 9.6345679\nSaida: %f\n", parteFracionaria(9.6345679));
	printf("\nEntrada 6, 2\nSaida: %f\n", divInts(6, 2));
	printf("\nEntrada 8, 2\nSaida: %f\n", divInts(8, 2));
	printf("\nEntrada 17, 7\nSaida: %f\n", divInts(17, 7));
}