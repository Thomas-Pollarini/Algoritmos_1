#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float peso,eng,ema;
    
    printf("Digite seu peso:");
    scanf("%f",&peso);
    
    eng=peso*1.15;
    ema=peso*0.8;
    
    printf("Peso caso engorde:%.2f\nPeso caso emagreça:%.2f\n",eng,ema);
    
    return (EXIT_SUCCESS);
}

