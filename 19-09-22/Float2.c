#include<stdio.h>
#include<stdlib.h>

int main()
{
float salario[2];
int matricula[2];
char nome[50];
int i, nfunc;

printf("Digite o nome da empresa: ");
gets(nome);
printf("Digite o numero do funcinario");
scanf("%d", &nfunc);
for(i=0; i<nfunc; i++){
	printf("Digite a matricula e salario do funcionario %d = ", i+1);
	scanf("%d%f", &matricula[i], &salario[i]);

}
printf("Empresa %s\n", nome);
printf("Matricula e Salario \n");
for(i=0; i<nfunc; i++)
{
	printf("%10d %10.f\n", matricula[i], salario[i]);
}
getchar();
}
