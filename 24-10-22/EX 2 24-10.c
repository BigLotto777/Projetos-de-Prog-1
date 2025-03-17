#include <stdio.h>
int main()
{
	int x = 10;
	double y=20.50, soma;
	char z = 'a';
	
	int *pX = &x;
    double *pY = &y;
    char *pZ = &z;
	soma = *pX + *pY;
	
	printf("Endereco de x = %i - valor de x = %i \n", pX, *pX );
	printf("Endereco de y = %i - valor de y = %lf \n", pY, *pY);
	printf("Endereco de z = %i - valor de z = %c \n", pZ, *pZ);
	printf("A soma de X e Y eh de: %lf ", soma);
}
