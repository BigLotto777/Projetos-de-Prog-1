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
	
	printf("Voc� � velho!");
    }
	else{
		if (idade<=21)
		printf("Voc� � novo!");
		
	}
}

