//Criar um vetor para ordenar os n�meros inseridos
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 10

int main()
{
setlocale(LC_ALL, "");

int numeros[TAM]; 
int i, aux, contador;

printf("Insira dez n�meros para preencher o Array, e pressione ENTER ap�s digitar cada n�mero:\n");
for(i=0;i<TAM; i++)
{
	scanf("%d", &numeros[i]);
}
printf("Ordem atual dos itens no Array:\n");

for(i=0;i<TAM;i++)
{
	printf("%4d", numeros[i]);
}
for(contador=1; contador<TAM; contador++)
{
	for(i=0; i<TAM -1; i++)
	{
		if(numeros[i] > numeros[i+1])
		{
			aux = numeros[i];
			numeros[i]=numeros[i+1];
			numeros[i+1]=aux;
		}
	}
}
printf("\nElementos do Array em ordem crescente: \n");
for(i=0; i<TAM; i++)
{
	printf("%4d", numeros[i]);
}
printf("\n");

return 0;
}
