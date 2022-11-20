#include <stdio.h>
#include <math.h>
void soma1(int *x)
{
	(*x)++; 
}
int main(){
		int x = 0;
		soma1(&x);
		soma1(&x);
		soma1(&x);
		printf("o valor da soma eh: %d\n", x);
		return 0;
}