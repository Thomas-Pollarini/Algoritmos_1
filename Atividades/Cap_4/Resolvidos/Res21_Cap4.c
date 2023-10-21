#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int ce,cg;
    float peso,pesokg,imp,vlr,vlrf;
    
    printf("Digite o código do estado de origem da carga: ");
    scanf("%d",&ce);
    printf("Digite o código da carga: ");
    scanf("%d",&cg);
    printf("Digite o peso da carga(t): ");
    scanf("%f",&peso);
    
    pesokg=peso*1000;
    
    if(cg>=10 && cg<=20){
        vlr=pesokg*100;
    }
    if(cg>=21 && cg<=30){
        vlr=pesokg*250;
    }
    if(cg>=31 && cg<=40){
        vlr=pesokg*340;
    }
    
    switch(ce){
        case 1:
            imp=vlr*0.35;
          break;
          
        case 2:
            imp=vlr*0.25;
          break;
        
        case 3:
            imp=vlr*0.15;
          break;
          
        case 4:
            imp=vlr*0.05;
          break;
          
        case 5:
            imp=0;
          break;  
    }
   
    vlrf=vlr+imp;
            
    printf("Peso da carga do caminhão em quilos: %.2f\nPreço da carga do caminhão: %.2f\n"
            "Valor do imposto: %.2f\nValor total transportado pelo caminhão: %.2f\n",pesokg,vlr,imp,vlrf);
    
    return (0);
}

