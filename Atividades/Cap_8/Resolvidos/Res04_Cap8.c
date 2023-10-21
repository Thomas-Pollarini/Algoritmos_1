#include <stdio.h>
#include <stdlib.h>

void converter(float seg){

    float hora,min;
    
    min=seg/60.0;
    hora=min/60.0;
    printf("\nEm horas: %.3f\nEm minutos: %.3f\nEm segundos: %.3f\n",hora,min,seg);
    
}

int main() {

    float seg;
    
    printf("Digite um valor em segundos: ");
    scanf("%f",&seg);
    converter(seg);
    
    return (0);
}

