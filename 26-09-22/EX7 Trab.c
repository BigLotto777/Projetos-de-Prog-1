#include<stdio.h>
#include<conio.h>
int main()
{
int a, b;
printf("Digite um numero: ");
scanf("%d", &a);
printf("Digite outro numero: ");
scanf("%d", &b);
if(a%b==0){
	printf("A");
}
else{
	printf("B");
}
printf("\n");
system("pause");
return 0;
} 
