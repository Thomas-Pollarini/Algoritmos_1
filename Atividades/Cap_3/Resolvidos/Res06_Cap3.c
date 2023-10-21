#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    
    float salb,venda,com,salf;
    
    printf("Digite o salário fixo:");
    scanf("%f",&salb);
    printf("Digite o valor das vendas:");
    scanf("%f",&venda);
    
    com=venda*0.03;
    salf=salb+com;
    
    printf("Valor da comissão:%.2f\nValor do salário final:%.2f\n",com,salf);
    
    return (EXIT_SUCCESS);
}

