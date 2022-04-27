/*Faça um programa em C que calcule o valor do desconto sobre um valor bruto lido com base na escala: até de 100.00 aplica 1%; de 100.01 a 500.00 aplica 5%; acima de 500.00 aplica 10%.*/

#include <stdio.h>

int main(void) {
    float valor; 
    printf("Digite o valor bruto: \n"); 
    scanf("%d" ,&valor);

    if(valor <= 100){
        valor=valor-(valor*0.01);
    }else if(valor>=100.01 && valor<=500){
        valor=valor-(valor*0.05);
    }else if(valor>500){
        valor=valor-(valor*0.10);
    }

    printf("O valor final é: \n" ,valor);

}