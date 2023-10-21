#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    int num1,num2,num3,num4,resultado;
    
    printf("Digite os 4 números que serão somados:\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    scanf("%d",&num4);
    
    resultado = num1 + num2 + num3 + num4;
    
    printf("O resultado da soma dos quatro números é: %d \n",resultado);
    
    return (EXIT_SUCCESS);
}

