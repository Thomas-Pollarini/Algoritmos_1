#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float n1,n2,media;
    
    printf("Digite o valor das duas notas:\n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    
    media=(n1*2.0+n2*3.0)/5.0;
            
    printf("A média ponderada das notas é:%.2f\n",media);
    
    return (EXIT_SUCCESS);
}

