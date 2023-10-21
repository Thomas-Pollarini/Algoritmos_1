#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float salm,kwcons,vkw,conta,conta15;
    
    printf("Digite o salário mínimo: ");
    scanf("%f",&salm);
    printf("Digite a quantidade de quilowatts consumidos: ");
    scanf("%f",&kwcons);
    
    vkw=(salm/5.0);
    conta=vkw*kwcons;
    conta15=conta -(0.15*conta);
            
    printf("Valor de cada quilowatt:%.2f\n"
            "Valor a ser pago:%.2f\n"
            "Valor a ser pago com 15 por cento de desconto:%.2f\n",vkw,conta,conta15);

    return (EXIT_SUCCESS);
}

