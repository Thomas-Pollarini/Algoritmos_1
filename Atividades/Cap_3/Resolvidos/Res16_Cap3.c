#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float c1,c2,hip;
    
    printf("Digite o valor dos catetos:\n");
    scanf("%f",&c1);
    scanf("%f",&c2);
    
    hip=pow(c1,2)+pow(c2,2);
    hip=sqrt(hip);
    
    printf("A hipotenusa é:%.2f\n",hip);
    
    return (EXIT_SUCCESS);
}

