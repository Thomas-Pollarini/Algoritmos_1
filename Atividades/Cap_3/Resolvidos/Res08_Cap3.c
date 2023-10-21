#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float pesokg,pesog;
    
    printf("Digite seu peso(kg):");
    scanf("%f",&pesokg);
    
    pesog=pesokg*1000.0;
            
    printf("Peso em gramas:%.2f\n",pesog);
    
    return (EXIT_SUCCESS);
}

