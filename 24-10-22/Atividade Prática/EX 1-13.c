#include<stdio.h>
#include<stdlib.h>

int main(){

  int i;
  int *v;
  v = (int*)malloc(sizeof(int)*3);  
  
  v[0] = 10;
  v[1] = 11;
  v[2] = 12;
  

  for(i = 0; i < 3; i++)
    printf("v[%d]: %d\n", i, v[i]);

  printf("Endereco de v: %p", *v);
}
