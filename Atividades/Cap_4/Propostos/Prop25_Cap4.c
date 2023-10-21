#include <stdio.h>
#include <stdlib.h>

int main() {

    float hx,hf,min,grat;
    
    printf("Digite o número de horas extras trabalhadas: ");
    scanf("%f",&hx);
    printf("Digite o número de horas faltadas: ");
    scanf("%f",&hf);
    
    min=hx-((2.0/3.0)*hf);
    
    if(min>=2400.0){
        grat=500.0;
    }
    if(min>=1800.0 && min<2400.0){
        grat=400.0;
    }
    if(min>=1200.0 && min<1800.0){
        grat=300.0;
    }
    if(min>=600.0 && min<1200.0){
        grat=200.0;
    }
    if(min<600.0){
        grat=100.0;
    }
    
    printf("A gratificação será de: %.2f\n",grat);
    
    return (0);
}

