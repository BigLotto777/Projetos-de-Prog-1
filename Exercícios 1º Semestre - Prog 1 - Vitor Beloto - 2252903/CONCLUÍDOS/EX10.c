#include<stdio.h>
#include<stdlib.h>

float potencia, tempo, custoA, custoB, custoC;

int main(int argc, char*argv[])
{
	printf("Digite a potencia em Watts: ");
	scanf("%f", &potencia);
	printf("Digite o tempo em horas: ");
	scanf("%f", &tempo);
	custoA= (potencia*0.642)/1000;
	custoB= (custoA*tempo);
	custoC= (custoB*30);
	printf("o custo A e de:, %f, Custo B: %f e o custo C e de: %f", custoA,custoB,custoC);
	getchar();
}
