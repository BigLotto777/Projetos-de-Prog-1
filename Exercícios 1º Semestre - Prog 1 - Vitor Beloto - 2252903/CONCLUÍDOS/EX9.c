//Area do Triangulo!
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float b, h;
	float area;
	
	printf("Digite o comprimento da base do triângulo: ");
	scanf("%f", &b);
	
	printf("Digite o comprimento da altura do triângulo: ");
	scanf("%f", &h);
	
	area =(b*h)/2;
	printf("A área do triângulo é de:%.2f\n", area);
}

