#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float l,a;
    
    printf("Digite o valor do lado do quadrado:");
    scanf("%f",&l);
    
    a=pow(l,2);
    
    printf("A área do quadrado é:%7.2f\n",a);
    
    return (EXIT_SUCCESS);
}

