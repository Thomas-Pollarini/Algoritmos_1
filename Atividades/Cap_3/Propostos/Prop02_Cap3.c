#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float n1,n2,n3,media;
    
    printf("Digite as três notas para calcular a média aritmética: \n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    
    media = (n1+n2+n3)/3.0;
    
    printf("A média aritmética é : %.2f \n",media);
    
    return (EXIT_SUCCESS);
}

