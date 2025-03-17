#include<stdio.h>
#include<stdlib.h>

int main (){
	int cont;
	char cod;
	float nota, media, total;
	total = 0;
	cod='c'; 
	
	while(cod !='f'){
		for(cont=1; cont<=4;cont++){
			printf("Digite a nota: ");
			scanf("%f", &nota);
			total = total + nota;
			
		}
		media = total/4;
		printf("Nota media: %.2f\n\n", media);
		total = 0;
		nota = 0;
		printf("Deseja calcular outra media?\n Pressione qualquer tecla para continuar ou pressione 'f' para finalizar.\n");
		cod = getchar();
		
	}
	return 0;
}
