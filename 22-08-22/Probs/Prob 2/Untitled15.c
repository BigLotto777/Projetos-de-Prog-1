//Idade!
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float idade;
	
    printf("Digite sua idade: ");
    scanf("%f", idade);
    
    if(idade>=70){
	
	printf("Você é velho!");
    }
	else{
		if (idade<=21)
		printf("Você é novo!");
		
	}
}

