#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, n4, n5;
	float media;
	
	printf("Digite sua primeira nota: ");
	scanf("%f", &n1);
	
	printf("Digite sua segunda nota: ");
	scanf("%f", &n2);
	
	printf("Digite sua terceira nota: ");
	scanf("%f", &n3);
	
	printf("Digite sua quarta nota: ");
	scanf("%f", &n4);
	
	printf("Digite sua quinta nota: ");
	scanf("%f", &n5);
	
	media = (n1+n2+n3+n4+n5)/5;
	printf("Sua média é:%f!", media);
}
