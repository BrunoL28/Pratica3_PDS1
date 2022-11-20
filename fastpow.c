//5 letra a
#include <stdio.h>
	unsigned long long int fast_pow_2(int expoente){
	return (unsigned long long int)pow(2, expoente);
}
	int main(){
	printf("\nExpoente 0 \nSaida: %llu", fast_pow_2(0));
	printf("\nExpoente 1 \nSaida: %llu", fast_pow_2(1));
	printf("\nExpoente 10 \nSaida: %llu", fast_pow_2(10));
	printf("\nExpoente 32 \nSaida: %llu", fast_pow_2(32));
	return 0;
}

	