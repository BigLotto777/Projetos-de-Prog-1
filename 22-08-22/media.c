//DESVIO CONDICIONAL SIMPLES
#include<stdio.h>
#include<locale.h>

int main()

{
setlocale(LC_ALL, "Portuguese");
	float n1, n2;
	float media;
	
	printf("Digite a primeira nota:\n");
	scanf("%f", &n1);
	
	printf("Digite a segunda nota:\n");
	scanf("%f", &n2);
	
	media = (n1+n2)/2;
	
	if(media>=70){
		printf("Aprovado!\n");
	} 
	else{
		if(media>=50)
			printf("Recuperação!\n");
			else{
				printf("Reprovado!\n");
			}
			
		
	}
	
}
