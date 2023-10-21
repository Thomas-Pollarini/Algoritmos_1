#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float salm,salf,nsal;
    
    printf("Digite o valor do salário mínimo e o valor do seu salário:\n");
    scanf("%f",&salm);
    scanf("%f",&salf);
    
    nsal=salf/salm;
    
    printf("Salários mínimos recebidos:%.2f\n",nsal);
    
    return (EXIT_SUCCESS);
}

