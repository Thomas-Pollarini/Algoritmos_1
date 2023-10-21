#include <stdio.h>
#include <stdlib.h>




int main() {

    float salb,sal,grat,imp;
    
    printf("Digite o valor do salário bruto: ");
    scanf("%f",&salb);
    
    if(salb<=350.0){
        grat=100.0;
    }
    if(salb>350.0 && salb<600.0){
        grat=75.0;
    }
    if(salb>=600.0 && salb<=900.0){
        grat=50.0;
    }
    if(salb>900.0){
        grat=35.0;
    }
            
    imp=salb*0.07;
    
    sal=salb-imp+grat;
    
    printf("Valor do salário a receber %.2f\n",sal);
    
    return (0);
}

