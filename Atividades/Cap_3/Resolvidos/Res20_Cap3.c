#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float ang,rad,ca,hip,coss;
    
    printf("Digite o valor do ângulo:");
    scanf("%f",&ang);
    printf("A medida entre a parede e a escada:");
    scanf("%f",&ca);
    
    rad=(ang*3.14)/180.0;
    hip=ca/cos(rad);
         
    printf("Medida da escada é:%f\n",hip);
    
    return (EXIT_SUCCESS);
}

