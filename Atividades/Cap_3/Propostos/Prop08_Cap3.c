#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float dep,taxa,rend,total;
    
    printf("Digite o valor do deposito e da taxa de juros:\n");
    scanf("%f",&dep);
    scanf("%f",&taxa);
    
    taxa= taxa/100.0;
    rend= dep*taxa;
    total=dep+rend;
    
    printf("O valor do rendimento será de: %.2f \n O valor total será de: %.2f \n",rend,total);
    
    return (EXIT_SUCCESS);
}

