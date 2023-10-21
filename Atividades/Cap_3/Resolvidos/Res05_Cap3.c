#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float val,nval;
    
    printf("Digite o preço do produto: ");
    scanf("%f",&val);
    
    nval=val-(val*0.1);
    
    printf("Preço do produto com desconto:%.2f\n",nval);
    
    return (EXIT_SUCCESS);
}

