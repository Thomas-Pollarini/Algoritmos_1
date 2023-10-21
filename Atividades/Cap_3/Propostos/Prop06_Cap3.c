#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float sal,nsal,bns,imp;
    
    printf("Digite seu salário base: ");
    scanf("%f",&sal);
    
    bns= sal * 0.05;
    imp= sal * 0.07;
    nsal= sal+bns-imp;    
 
    printf("Seu salário a receber será: %.2f \n",nsal);
    
    return (EXIT_SUCCESS);
}

