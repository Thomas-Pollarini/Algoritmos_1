#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(int argc, char** argv) {

    float sal,nsal,imp;
    
    printf("Digite seu salario base: ");
    scanf("%f",&sal);
    
    imp=sal*0.1;
    nsal=sal+50.0-imp;
    
    printf("Seu salário a receber será: %.2f \n",nsal);
    
    return (EXIT_SUCCESS);
}

