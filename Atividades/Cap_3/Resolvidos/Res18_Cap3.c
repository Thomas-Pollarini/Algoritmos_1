#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float C,F;
    
    printf("Digite a temperatura (C):");
    scanf("%f",&C);
    
    F = 180.0*(C + 32.0)/100.0;
    
    printf("Temperatura em Fahrenheit:%.1f\n",F);
    
    return (EXIT_SUCCESS);
}

