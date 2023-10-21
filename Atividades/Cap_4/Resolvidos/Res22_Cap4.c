#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    float salb,sal,tempo,imp,grat;
    char class;
    
    printf("Digite o valor do salário base: ");
    scanf("%f",&salb);
    printf("Digite o tempo de serviço: ");
    scanf("%f",&tempo);
    
    if(salb<200.0){
        imp=0;
    }
    else{
        if(salb>=200.0 && salb<=450.0){
            imp=salb*0.03;
        }
        else{
            if(salb>450.0 && salb<700.0){
                imp=salb*0.08;
            }
            else{
                imp=salb*0.12;
            }
        }
    }
    
    if(salb>500.0){
        if(tempo<=3.0){
            grat=20;
        }
        else{
            grat=30;
        }
    }
    else{
        if(tempo<=3.0){
            grat=23;
        }
        else{
            if(tempo>3.0 && tempo<6.0){
                grat=35;
            }
            else{
                grat=33;
            }
        }
    }
    
    sal=salb-imp+grat;
    
    if(sal<=350.0){
        class='A';
    }
    else{
        if(sal>350.0 && sal<600.0){
            class='B';
        }
        else{
            class='C';
        }
    }
    
    printf("Valor do imposto: %.2f\nValor da gratificação: %.2f\n"
            "Valor do salário liquido: %.2f\nClassificação: %c\n",imp,grat,sal,class);
    
    return (0);
}

