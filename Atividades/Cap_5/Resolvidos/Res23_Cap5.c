#include <stdio.h>
#include <stdlib.h>


int main() {

    
    int tipo,cont=0;
    float salm,kw,vlrkw,acr,vlri,vlrf,vlrt=0;
    
    printf("Digite o valor do salário minímo: ");
    scanf("%f",&salm);
    
    vlrkw=salm/8;
    
    printf("Valor de cada quilowatt: %.2f\n",vlrkw);
    
    
    printf("Digite a quantidade de quilowatts gasta pelo consumidor: ");
    scanf("%f",&kw);
    
    
    while(kw!=0){
        
        printf("Digite o tipo de consumidor: ");
        scanf("%d",&tipo);
        
        vlri=vlrkw*kw;//valor gasto
        
        switch(tipo){ //definir acrésimo
            
            case 1: 
                acr=vlri*0.05;
              break;
              
            case 2:
                acr=vlri*0.1;
              break;
              
            case 3:
                acr=vlri*0.15;
              break;  
                            
        }        
        
        vlrf=vlri+acr;  //valor final
        vlrt=vlrt+vlrf;  //faturamento total
        
        if(vlrf>=500.0 && vlrf<=1000.0){ //consumidores que pagam entre R$ 500,00 e R$ 1.000,00
            cont++;
        }
        
        printf("Valor a ser pago pelo consumidor: %.2f\n",vlrf);
        
        printf("Digite a quantidade de quilowatts gasta pelo consumidor: ");
        scanf("%f",&kw);
    }
    
    printf("Faturamento total: %.2f\nConsumidores que pagam entre R$ 500,00 e R$ 1.000,00: %d\n",vlrt,cont);
    
    
    return (0);
}

