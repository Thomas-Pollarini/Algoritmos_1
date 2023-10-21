#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float custo,tick,meta;
    
    printf("Digite o custo de produção da peça:");
    scanf("%f",&custo);
    printf("Digite o preço do ingresso:");
    scanf("%f",&tick);
    
    meta= custo/tick;
    meta= ceil(meta);
     
    printf("Número de ingressos necessários para pagar produção:%.0f\n",meta);
    
    return (EXIT_SUCCESS);
}

