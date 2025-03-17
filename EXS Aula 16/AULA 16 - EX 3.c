#include <stdio.h>
#include <stdlib.h>

struct vetor{
int a[10];
int b[10];
int c[10];
int soma;
} vet;
int main (){
	int i;
	vet.soma = 0; 
	for(i=0;i<2;i++){
		printf("Digite os valores de A: ");
		scanf("%d", &vet.a[i]);
		fflush(stdin);
		
		printf("Digite os valores de B: ");
		scanf("%d", &vet.b[i]);
		fflush(stdin);
		
		printf("Digite os valores de C: ");
		scanf("%d", &vet.c[i]);
		fflush(stdin);
	}
	for (i=0; i<2; i++)
	vet.soma = vet.soma + vet.a[i] + vet.b[i] + vet.c[i];
	printf("A + B = %d", vet.soma);
}

