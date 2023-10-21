#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() {

    float salm,hr,coef,salb,imp,grat,aux,sal;
    char turno,cargo;        
    
    
    printf("Digite o turno de trabalho: ");
    scanf("%c",&turno);
    printf("Digite a categoria: ");
    scanf(" %c",&cargo);
    printf("Digite o valor do salário mínimo: ");
    scanf("%f",&salm);
    printf("Digite o números de horas trabalhadas: ");
    scanf("%f",&hr);
   
    
    
    switch(turno){
        case 'M':
            coef=salm*0.10;
          break; 
        
        case 'V':
            coef=salm*0.15;
          break;
          
        case 'N':
            coef=salm*0.12;
          break;
          
    }     
    
    salb=hr*coef;
    
    switch (cargo){
        case 'O':
            
            if(salb>=300.0){
                imp=salb*0.05;
            }
            else{
               imp=salb*0.03;
               
            }
            break;
        case 'G':
            if(salb>=400.0){
                imp=salb*0.06;
            }
            else{
                imp=salb*0.04;
            }
    }           
    
    if(turno==78 && hr>80){
        grat=50.0;
    }
    else{
        grat=30.0;
    }
    
    if(cargo==79 || coef<=25){
        aux=salb/3;
    }
    else{
        aux=salb/2;
    }
    
    sal=salb-imp+grat+aux;
    
    printf("Coeficiente salárial: %.2f\nValor do salário bruto: %.2f\n"
            "Valor do imposto: %.2f\nValor da gratificação: %.2f\n"
            "Valor auxílio alimentar: %.2f\nValor do salário liquido: %.2f\n",
            coef,salb,imp,grat,aux,sal);
    
    if(sal<350.0){
        printf("Classificação: Mal remunerado.\n");
    }
    else{
        if(sal>=350.0 && sal<=600.0){
            printf("Classificação: Normal.\n");
        }
        else{
            printf("Classificação: Bem remunerado.\n");
        }
    }
    
    
    return (0);
}
