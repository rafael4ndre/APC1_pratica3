/*
7-Escrever um programa em C que liste os 10 primeiros números da série de Fibonacci.
*/

#include <stdio.h> 

int fib (int n){
  if (n==1){
    return 0;
  }else if(n==2){
    return  1;
  }else {
    return fib(n-1)+fib(n-2);
  }
}


int main(void) {
  int n=10, i=1; 
  int result=0;
  //printf("Digite um valor n: \n");
  //scanf("%d" ,&n);
  for(i;i<=n;i++){
    result=fib(i);
    printf("%d\n" ,result);
  }
}

