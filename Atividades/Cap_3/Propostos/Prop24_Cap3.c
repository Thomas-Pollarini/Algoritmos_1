#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float hora,h,min,tempo;
    
    printf("Digite a hora: ");
    scanf("%f",&hora);
    
    h=floor(hora);
    min=hora-h;
    tempo= (h*60.)+(min*100.);
    
    printf("Hora digitada apenas em minutos:%.0f\n",tempo);
    
    return (EXIT_SUCCESS);
}

