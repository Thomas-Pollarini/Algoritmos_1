#include <stdio.h>
#include <stdlib.h>


int main() {

    int cod,tipo;
    float vlr,rend,rendt=0,vlrt=0;
    
    printf("Digite o código do cliente: ");
    scanf("%d",&cod);
    
    while(cod>0){
        
        printf("Digite o tipo de investimento: ");
        scanf("%d",&tipo);
        printf("Digite o valor investido: ");
        scanf("%f",&vlr);
        
        switch(tipo){
            
            case 1:
                vlrt=vlrt+vlr;
                rend=vlr*0.015;
                rendt=rendt+rend;
              break;  
             
            case 2:
                vlrt=vlrt+vlr;
                rend=vlr*0.02;
                rendt=rendt+rend;
              break;  
              
            case 3:
                vlrt=vlrt+vlr;
                rend=vlr*0.04;
                rendt=rendt+rend;
              break;    
        }
        
        printf("\nRendimento mensal: %.2f\n\n",rend);
        
        printf("Digite o código do cliente: ");
        scanf("%d",&cod);
    }
    
    printf("\nTotal investido: %.2f\nTotal de juros pagos: %.2f\n",vlrt,rendt);
    
    
    return (0);
}

