#include <stdio.h>
int main()
{
	int X,Y,Z; 
	int *px,*py,*pz;      
 	char A, B, C;
  
	px=&X;
	py=&Y;
	pz=&Z;
  
 	printf("\nDigite tres inteiros: \n");
 	scanf("%i %i %i", &X, &Y, &Z);
 	printf("\n\n\n");
 	printf("Endereco: %x - Valor: %i\nEndereco: %x - Valor: %i\nEndereco: %x - Valor: %i\n", px, *px, py, *py, pz, *pz);

 if (*px <= *py && *py <= *pz){
    printf("A = %d , B = %d, C = %d",*px,*py,*pz);
  }
  else{

    if (*px <= *pz && *pz <= *py){
      printf("A = %d , B = %d, C = %d",*px,*pz,*py);
    }
    else{

      if (*py <= *px && *px <= *pz){
        printf("A = %d , B = %d, C = %d",*py,*px,*pz);
      }
      else{

        if (*py <= *pz && *pz <= *px){
         printf("A = %d , B = %d, C = %d",*py,*pz,*px);
        }
        else{

          if (*pz <= *px && *px <= *py){
            printf("A = %d , B = %d, C = %d",*pz,*px,*py);
          }
          else{
            if (*px == *py && *py == *pz){
              printf("A = %d , B = %d, C = %d",*px,*py,*pz);
            }
            else{
              printf("A = %d , B = %d, C = %d",*pz,*py,*px);
            }
          }
        }
      }
    }
}
}
