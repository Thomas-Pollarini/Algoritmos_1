#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float n1,n2,n3,mult;
    
    printf("Digite os 3 números que serão multiplicados:\n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    
    mult=n1*n2*n3;
    
    printf("O resultado da multiplicação é:%f\n",mult);
    
    return (EXIT_SUCCESS);
}

