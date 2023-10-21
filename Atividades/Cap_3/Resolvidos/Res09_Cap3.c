#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float B,b,h,A;
    
    printf("Digite o valor da base maior:");
    scanf("%f",&B);
    printf("Digite o valor da base menor:");
    scanf("%f",&b);
    printf("Digite o valor da altura:");
    scanf("%f",&h);
    
    A=((B+b)*h)/2.0;
            
            printf("A área do trapézio é:%.2f\n",A);
            
    return (EXIT_SUCCESS);
}

