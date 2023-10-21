#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float sal, nsal;
    
    printf("Escreva seu salário atual: ");
    scanf("%f",&sal);
    
    nsal= sal * 1.25;
    
    printf("Seu novo salário é: %.2f \n",nsal);
    
    return (EXIT_SUCCESS);
}

