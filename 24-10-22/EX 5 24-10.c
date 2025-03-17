/*O programa vai exibir 6 nomes e seus respectivos endereços
de memória.*/
#include<stdio.h>

int main(){
 char *nome[5]={"Marcos", "Jose", "Myiamoto", "Sekiro", "Goh"};
 int i;
 
 for(i=0;i<5;i++){
 	printf("\n%i", &nome[i]);
 }
 for(i=0;i<5; i++){
 	printf("%s\n", *(nome+i));
 }
 printf("Endereco de Musashi: %d\n", (nome+3));
 printf("Tamanho = %d", sizeof(nome[2]));
}
