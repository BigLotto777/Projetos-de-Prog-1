//M�dia Populacional
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int nrFilhos, qtd=0, qtdAbaixoCem = 0;
    float percentual, salario, SalarioMedio = 0, mediaFilho = 0,
	maiorSalario = 0;
	
	printf("Digite seu sal�rio(Negativo encerra a opera��o): ");
	scanf("%f", &salario);
	
	while(salario> 0){
		printf("Informe o n�mero de filhos: ");
		scanf("%d", &nrFilhos);
		
		SalarioMedio += salario;
		mediaFilho += nrFilhos;
		qtd++;
		
		if(salario < 100)
		qtdAbaixoCem++;
		
		if(salario > maiorSalario)
		maiorSalario = salario;
		
		printf("Informe o sal�rio: ");
		scanf("%f", &salario);
		
	}
	SalarioMedio = SalarioMedio /qtd;
	mediaFilho = mediaFilho /qtd;
	percentual = ((float)qtdAbaixoCem / qtd) * 100;
	
	
	printf("Sal�rio M�dio R$ %.2f\n", SalarioMedio);
	printf("Quantidade m�dia de filhos %.2f\n", mediaFilho);
	printf("Maior Sal�rio R$ %.2f\n", maiorSalario);
	printf("Percentual de sal�rios abaixo de R$100,00 --  %.2f\n", percentual);
	
	
}
