//Letra a

#include <stdio.h>
float troca(float *end_valor1, float *end_valor2){
	float passagemParametro;
	passagemParametro = *end_valor1;
	*end_valor1 = *end_valor2;
	*end_valor2 = passagemParametro;
}

//Letra b

int main(){
	float x = 5.65939;
    float y = 4.36722;
	scanf("%f %f", &x, &y);
	troca(&x, &y);
	printf("\nx = %f\ny = %f",x, y);
	return 0;
}