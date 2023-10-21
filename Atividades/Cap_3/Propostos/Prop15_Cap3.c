#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float fab,pluc,pimp,vluc,vimp,vtotal;
    
    printf("Digite o preço de fabrica: ");
    scanf("%f",&fab);
    printf("Digite o percentual do lucro do distribuidor: ");
    scanf("%f",&pluc);
    printf("Digite o percentual dos impostos: ");
    scanf("%f",&pimp);
    
    vluc=fab*(pluc/100.0);   
    vimp=fab*(pimp/100.0);        
    vtotal=fab+vluc+vimp;
    
    printf("Valor correspondente ao lucro do distribuidor: %.2f\n"
            "Valor correspondente aos impostos: %.2f\n"
            "Preço final do veículo: %.2f\n",vluc,vimp,vtotal);

    
    return (EXIT_SUCCESS);
}

