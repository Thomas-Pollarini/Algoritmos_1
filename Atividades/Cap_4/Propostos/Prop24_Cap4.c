#include <stdio.h>
#include <stdlib.h>

int main() {

    char ref;
    int tipo;
    float vlr,nvlr,aum,imp;
    
    printf("Digite a refrigeração do produto: ");
    scanf("%c",&ref);
    printf("Digite o tipo do produto: ");
    scanf("%d",&tipo);
    printf("Digite o preço do produto: ");
    scanf("%f",&vlr);
    
    if(vlr<=25){
        switch(tipo){
            case 1:
                aum=vlr*0.05;
              break;
            
            case 2:
                aum=vlr*0.08;
              break;
              
              
            case 3:
                aum=vlr*0.1;
              break;
            
            default:
                printf("Categoria informada não existe.");
                
                return (0);
              break;  
        }
    }
    else{
        switch(tipo){
            case 1:
                aum=vlr*0.12;
              break;
            
            case 2:
                aum=vlr*0.15;
              break;
              
              
            case 3:
                aum=vlr*0.18;
              break;
            
            default:
                printf("Categoria informada não existe.");
                
                return (0);
              break;  
        }
    }
    
    if(tipo==2 || ref==82){
        imp=vlr*0.05;
    }
    else{
        imp=vlr*0.08;
    }    
        
    nvlr=vlr+aum-imp;
    
    printf("Valor do aumento: %.2f\nValor do imposto: %.2f\nNovo preço: %.2f\n",aum,imp,nvlr);
    
    if(nvlr<=50.0){
        printf("Classificação: Barato");
    }
    else{
        if(nvlr>50.0 && nvlr<120.0){
            printf("Classificação: Normal");
        }
        else{
            printf("Classificação: Caro");
        }
    }
    
    return (0);
}

