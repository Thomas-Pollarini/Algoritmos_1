#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float rs,ds,ms,ls;
    
    printf("Digite quantidade de dinheiro: ");
    scanf("%f",&rs);
    
    ds=rs/1.8;
    ms=rs/2.0;
    ls=rs/3.57;
    
    printf("Conversão em dólares:%.2f\n"
            "Conversão em marcos alemães:%.2f\n"
            "Conversão em libras:%.2f\n",ds,ms,ls);
    
    return (EXIT_SUCCESS);
}

