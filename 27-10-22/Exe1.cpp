//1. Faça um programa em C que armazene em um vetor 3 valores, e imprima os valores
//utilizando notação de ponteiro.

#include <stdio.h>
int main()
{
	int i;
  	float vetor[3];
  
 for(i=0; i<3; i++)
 {
 	printf("\nDigite os valores: \n");
 	scanf("%f", vetor+i);
 	printf("\n\n\tValor impresso \n");
 	printf("Endereco: %x - Valor: %f\n", vetor+i, *(vetor+i));
 }
}
