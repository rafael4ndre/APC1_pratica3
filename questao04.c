/*
Faça um programa em C que leia uma tecla pressionada e determine se ela é uma letra, um dígito ou um caractere especial.
*/

#include <stdio.h>

int main (void) {
  char car;

  printf("Escolha uma tecla:\n");
  scanf("%c", &car);

  if(car>=65&&car<=90||car>=97&&car<=122){
    printf("É uma letra.\n");
  }else if (car>=48&&car<=57){
    printf("É um numero. \n");
  }else if(car>=33&&car<=126){
    printf("É um caracter especial. \n");
  }else{
    printf("É um valor inválido");
  }

  return 0;
  
}