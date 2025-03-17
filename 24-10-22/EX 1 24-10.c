#include <stdio.h>
int main()
{
	int x;
	double y=20.50;
	char z = 'a';
	
	int *pX;
	pX = &x;
	
	
	printf("Endereco x = %i - valor x %i", pX, *pX);
}
