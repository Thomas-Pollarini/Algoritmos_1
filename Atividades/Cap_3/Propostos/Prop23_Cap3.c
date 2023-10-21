#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float num,i,f,a;
    
    printf("Digite um número real:");
    scanf("%f",&num);
    
    i=floor(num);
    f=num-i;
    
    printf("Parte inteira do número:%.0f\n",i);
    printf("Parte fracionaria do número:%0.6f\n",f);
    printf("Número arredondado:%.0f\n",num);
    
    return (EXIT_SUCCESS);
}

