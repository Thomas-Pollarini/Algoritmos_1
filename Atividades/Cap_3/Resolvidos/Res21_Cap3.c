#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float salm,sal,ht,hx;
    
    printf("Digite o valor do salário mínimo:");
    scanf("%f",&salm);
    printf("Digite o número de horas trabalhadas:");
    scanf("%f",&ht);
    printf("Digite o número de horas extras:");
    scanf("%f",&hx);
    
    sal=((salm/8.0)*ht)+((salm/4.0)*hx);
    
    printf("Salário a receber:%.2f\n",sal);
    
    return (EXIT_SUCCESS);
}

