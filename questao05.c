/*Faça um programa em C que leia um ano e verifique se ele é bissexto (é múltiplo de 4 e não é múltiplo de 100, ou é múltiplo de 400).*/

#include <stdio.h>

int main (void) {
  int ano; 
  printf("Informe um ano: \n");
  scanf("%d", &ano);
  if(ano%400==0){
    printf("O ano é bissexto.\n");
  } else if(ano%4==0&&ano%100!=0){
    printf("O ano é bissexto.\n");
  }else {
    printf("O ano não é bissexto.\n");
  }

  return 0; 
}