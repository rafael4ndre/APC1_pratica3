/*9-Faça um programa em C que leia dez números e imprima o maior e o menor entre eles.*/

#include <stdio.h>

int main(void) {
  int maior=0, menor=0;
  int valor=0; 
  
  for(int i=0; i<10; i++){
    printf("\nDigite o %dº número: ", i+1);
    scanf("%d", &valor); 
    printf("\n"); 
    if(i==0){
      maior=valor;
      menor=valor;
    }else{
      if(valor>maior){
        maior=valor;
      }
      if(valor<menor){
        menor=valor; 
      }
    }
  }
  printf("O maior valor é %d e o menor valor é %d\n", maior, menor);
  
}