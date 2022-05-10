/*8-Faça um programa em C que calcule o fatorial de um número inteiro.
*/

#include <stdio.h> 

int fatorial(int n){
  if(n<=2){
    return 2; 
  }else{
    return n*fatorial(n-1);
  }
}

int main(void) {
  int n;
  printf("Forneça o número n: ");
  scanf("%d" ,&n);
  printf("\nO Fatorial de %d é %d\n", n, fatorial(n));
  
  return 0;
}