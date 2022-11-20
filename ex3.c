#include <stdio.h>
int main(){
	float x = 4.5678;
    float y = 8.9678;
	float *ponteirox;
	float *ponteiroy;
	float aux;
	scanf("%f %f", &x, &y);
	ponteirox = &x;
	ponteiroy = &y;
	aux = *ponteirox;
	*ponteirox = *ponteiroy;
	*ponteiroy = aux;
	printf("\nx = %f\ny = %f", x, y);
	return 0;
}