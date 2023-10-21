#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int cpro,cpais,peso,pesog,preço,preçof,imp;
    
    printf("Digite o código do produto: ");
    scanf("%d",&cpro);
    printf("Digite o código do país: ");
    scanf("%d",&cpais);
    printf("Digite o peso do produto(Kg): ");
    scanf("%d",&peso);
    
    pesog=peso*1000;
    
    if(cpro>=1 && cpro<=4){
        preço=pesog*10;
    }
    else{
        if(cpro>=5 && cpro<=7){
            preço=pesog*25;
        }
        else{
            if(cpro>=8 && cpro<=10){
                preço=pesog*35;
            }
        }
    }
    
    switch(cpais){
        
        case 1:
            imp=preço*0;
          break;
        
        case 2:
            imp=preço*0.15;
          break;
            
        case 3:
            imp=preço*0.25;
          break; 
    }
    preçof=preço-imp;
    
    printf("Peso do protudo(g): %d\nPreço total do produto: %d\n"
            "Valor do imposto: %d\nValor final: %d",pesog,preço,imp,preçof);
    
    return (0);
}

