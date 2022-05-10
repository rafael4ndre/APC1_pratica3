/*
6-Faça um programa em C que liste todos os múltiplos de 3, entre 1 e 100.
*/

#include <stdio.h>

int main(void) {
  int i;

  printf("Os multiplos de 3 são:\n");
  for (i=0; i<100 ; i++){
    if(i%3==0){
      printf("\"%d\"\n", i);
    }
  }

  return 0;
}