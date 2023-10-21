#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float l1,l2,a,pw;
    
    printf("Digite as dimensões do cômodo:\n");
    scanf("%f",&l1);
    scanf("%f",&l2);
    
    a=l1*l2;
    pw=a*18.0;
    
    printf("Área do cômodo:%.2f\nPotência de iluminação:%.2f\n",a,pw);
    
    return (EXIT_SUCCESS);
}

