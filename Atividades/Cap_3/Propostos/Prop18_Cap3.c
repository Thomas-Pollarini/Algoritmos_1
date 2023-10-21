#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float saco,cat1,cat2,fsaco;
    
    printf("Digite a quantidade de ração no saco(Kg): ");
    scanf("%f",&saco);
    printf("Digite a quantidade de ração que é dada para cada gato por dia(g):\n");
    scanf("%f",&cat1);
    scanf("%f",&cat2);
    
    fsaco=(saco*1000.0)-(cat1*5.0)-(cat2*5.0);
    
    printf("No fim de 5 dias restará: %.2f g\n",fsaco);
    
    return (EXIT_SUCCESS);
}

