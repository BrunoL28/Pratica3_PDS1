#include <stdio.h>
void main(){
	int x = 0;
	int *ponteiro = &x;
	*ponteiro = 3;
	printf("%d", x);
}