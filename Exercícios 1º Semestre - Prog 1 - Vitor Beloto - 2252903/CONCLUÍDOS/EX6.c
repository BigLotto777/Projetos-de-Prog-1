#include<stdio.h>
#include<stdlib.h>

int main()
{

float saldo, total;

printf("Digite o saldo a receber um incremento de 5%%: R$ ", saldo);
scanf("%f",&saldo);
total=(saldo + 0.05*saldo);
printf ("O Rendimento e de: R$ %.2f ", total);
getchar();
}
