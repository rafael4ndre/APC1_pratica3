/*10-Faça um programa em C que leia um número decimal e o converta em binário (ex.: 9 => 1001)*/

#include <stdio.h>

//long long convert(int);

long long convert(int n) {
  long long bin = 0;
  int resto, i = 1;

  while (n!=0) {
    resto = n % 2;
    n /= 2;
    bin += resto * i;
    i *= 10;
  }

  return bin;
}

int main() {
  int n, bin;
  printf("Forneça o valor de n (base10): ");
  scanf("%d", &n);
  bin = convert(n);
  printf("%d em decimal =  %lld em binário\n", n, bin);
  return 0;
}

