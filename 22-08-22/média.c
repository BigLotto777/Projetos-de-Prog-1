//DESVIO CONDICIONAL SIMPLES
#include<stdio.h>

int main()
{
	float n1, n2;
	float media;
	
	printf("Digite a primeira nota:\n");
	scanf("%f", &n1);
	
	printf("Digite a segunda nota:\n");
	scanf("%f", &n2)
	
	media = (n1+n2)/2;
	
	if(media>=7){
		printf("Aprovado\n");
	}
}
