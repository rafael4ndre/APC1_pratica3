/*
Faça um programa em C que determine se um número inteiro lido é par ou ímpar.
*/

#include <stdio.h>

int main (void) {
    int num;
    printf("Digite um numero; \n"); 
    scanf("%d" ,&num);
    if(num%2==0){
      printf("O numero é par\n");
    }else{
      printf("O numero é impar\n");
    }
    return 0; 
}