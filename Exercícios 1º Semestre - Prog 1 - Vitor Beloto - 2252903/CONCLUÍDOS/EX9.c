//Area do Triangulo!
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float b, h;
	float area;
	
	printf("Digite o comprimento da base do tri�ngulo: ");
	scanf("%f", &b);
	
	printf("Digite o comprimento da altura do tri�ngulo: ");
	scanf("%f", &h);
	
	area =(b*h)/2;
	printf("A �rea do tri�ngulo � de:%.2f\n", area);
}

