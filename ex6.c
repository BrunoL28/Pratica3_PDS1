#include <stdio.h>
#include <math.h>
int ddd(unsigned int number){
	return number/(pow(10, 8));
}
void main(){
	printf("\nO codigo de area de seu numero eh: %d\n", ddd(3698765432));
}
	