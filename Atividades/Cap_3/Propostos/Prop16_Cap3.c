#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float salm,salb,salt,imp,horat;
    
    printf("Declare o números de horas trabalhadas e o salário mínimo:\n");
    scanf("%f",&horat);
    scanf("%f",&salm);
    
    salb=horat*(salm/2.0);
    imp=salb*0.03;
    salt=salb-imp;
    
    printf("Salário a receber: %.2f\n",salt);
    
    return (EXIT_SUCCESS);
}

