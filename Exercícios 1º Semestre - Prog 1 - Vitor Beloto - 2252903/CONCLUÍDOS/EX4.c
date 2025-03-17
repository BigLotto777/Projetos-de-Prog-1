//Média Populacional
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int nrFilhos, qtd=0, qtdAbaixoCem = 0;
    float percentual, salario, SalarioMedio = 0, mediaFilho = 0,
	maiorSalario = 0;
	
	printf("Digite seu salário(Negativo encerra a operação): ");
	scanf("%f", &salario);
	
	while(salario> 0){
		printf("Informe o número de filhos: ");
		scanf("%d", &nrFilhos);
		
		SalarioMedio += salario;
		mediaFilho += nrFilhos;
		qtd++;
		
		if(salario < 100)
		qtdAbaixoCem++;
		
		if(salario > maiorSalario)
		maiorSalario = salario;
		
		printf("Informe o salário: ");
		scanf("%f", &salario);
		
	}
	SalarioMedio = SalarioMedio /qtd;
	mediaFilho = mediaFilho /qtd;
	percentual = ((float)qtdAbaixoCem / qtd) * 100;
	
	
	printf("Salário Médio R$ %.2f\n", SalarioMedio);
	printf("Quantidade média de filhos %.2f\n", mediaFilho);
	printf("Maior Salário R$ %.2f\n", maiorSalario);
	printf("Percentual de salários abaixo de R$100,00 --  %.2f\n", percentual);
	
	
}
