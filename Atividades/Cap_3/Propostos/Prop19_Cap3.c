#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(int argc, char** argv) {

    float hdeg,hesc,ndeg;
    
    printf("Digite a altura dos degrais(m): ");
    scanf("%f",&hdeg);
    printf("Digite a altura da escada(m): ");
    scanf("%f",&hesc);
    
    ndeg=hesc/hdeg;
    ndeg=ceil(ndeg);
   
    printf("O número de degrais necessarios será: %.0f\n",ndeg);
    
    return (EXIT_SUCCESS);
}

