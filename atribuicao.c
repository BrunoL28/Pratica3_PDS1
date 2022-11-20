#include <stdio.h>
void main(){
	float x, y;
	printf("digite os valores de x e y: \n", x, y);
	scanf("%f %f", &x, &y);
	float *p = &y;
	float *q = &x;
	*p = x;
	*q = y;
	printf("%p\n", &x);
	printf("%p\n", &y);
	printf("\nx = %f\ny = %f", x, y);
}