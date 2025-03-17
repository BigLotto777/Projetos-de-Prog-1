#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	int inteiro1;
	float f1;
	char letra;
	char frase[15];
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um caractere: ");
	scanf("%c", &letra);
	printf("Digite um número inteiro: ");
	scanf("%d", &inteiro1);
	printf("Digite um número de ponto flutuante: ");
	scanf("%f", &f1);
	printf("Mission accomplished\n");
}
