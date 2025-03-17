#include <stdio.h>
#include <stdlib.h>

float calculaMedia(float prova1, float prova2, float prova3){
	float notaMedia;
	getchar();
	notaMedia = (prova1+ prova2 + prova3)/3;
	return notaMedia;
}

int main(){
	float nota1, nota2, nota3, media;
	int i;
	
	for(i=0;i<5;i++){
		printf("Aluno %d :\n", i+1);
		printf("Nota prova 1 => ");
		scanf("%f", &nota1);
		printf("Nota prova 2 => ");
		scanf("%f", &nota2);
		printf("Nota prova 3 => ");
		scanf("%f", &nota3);
		media = calculaMedia(nota1, nota2, nota3);
		printf("Media aluno %d = ", i+1);
		printf("%.2f \n", media);
	}
}
