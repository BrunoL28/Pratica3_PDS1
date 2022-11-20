//5 letra b
#include <stdio.h>
#include <math.h>
    unsigned long long int fast_pow_2(int expoente){
		return (unsigned long long int)(pow(2, expoente));
	}
	int main(){
		printf("\nExpoente 64 \nSaida: %llu", fast_pow_2(64)-1);
		return 0;
	}