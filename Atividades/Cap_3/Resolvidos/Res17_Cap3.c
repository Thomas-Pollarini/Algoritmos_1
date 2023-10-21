#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float comp,a,vol,raio,r2,r3;
    
    printf("Digite o valor do raio:");
    scanf("%f",&raio);
    
    comp=2.0*(3.1415*raio);
    r2=pow(raio,2);
    a=pow(raio,2)*3.1415;
    vol=pow(raio,3)*3.1415*0.75;
    
    printf("Comprimento da esfera é:%.2f\n"
            "Área da esfera:%.2f\n"
            "Volume da esfera:%.2f\n",comp,a,vol);
    
    return (EXIT_SUCCESS);
}

