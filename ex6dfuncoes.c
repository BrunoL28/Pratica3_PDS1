#include "ex6d.h"
#include <math.h>
int parOuImpar(unsigned int number){
	return !(number & (unsigned int)1);
}
int soma1SePar(unsigned int number){
	return number | (unsigned int)1;
}
int ddd(unsigned int number){
	return number/(pow(10, 8));
}
	