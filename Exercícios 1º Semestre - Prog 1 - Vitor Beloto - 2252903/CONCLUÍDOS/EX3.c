#include<stdio.h>
#include<string.h>

int main (int argc, char const *argv[])
{
	char nome[40];
	int cont=0;
	printf("Digite um nome: \n");
	fgets(nome,40,stdin);
	cont = strlen(nome)-1;
	printf("Este nome contem %d caracteres\n", cont);
	return 0;
}
