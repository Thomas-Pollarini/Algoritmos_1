#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    char tipo,ref;
    float vlr,vlra,vlrc,vlrf,imp,desc;
    
    
    printf("Digite o tipo do produto: ");
    scanf("%c",&tipo);
    printf("Digite a refrigeração do produto: ");
    scanf(" %c",&ref);
    printf("Digite o preço do produto: ");
    scanf("%f",&vlr);
    
    switch(ref){
        case 'N':
            switch(tipo){
                case 'A':
                    if(vlr<15.0){
                        vlra=2.0;
                    }
                    else{
                        vlra=5.0;
                    }
                  break;
                  
                case 'L':
                    if(vlr<10.0){
                        vlra=1.5;
                    }
                    else{
                        vlra=2.5;                        
                    }
                  break;
                
                case 'V':
                    if(vlr<30.0){
                        vlra=3.0;
                    }
                    else{
                        vlra=2.5;
                    }
            }
          break;
          
        case 'S':
            switch(tipo){
                case 'A':
                    vlra=8.0;
                  break;
                
                case 'L':
                    vlra=0;
                  break;
                  
                case 'V':
                    vlra=0;
                  break;
            }
          break;      
    }

    if(vlr<25){
        imp=vlr*0.05;
    }
    else{
        imp=vlr*0.08;
    }
    
    vlrc=vlr+imp;
    
    if(tipo==65 || ref==83){
        desc=0.0;
    }
    else{
        desc=vlrc*0.03;
    }
    
    vlrf=vlrc+vlra-desc;
    
    printf("Valor adicional: %.2f\nValor do imposto: %.2f\nPreço de custo: %.2f\n"
            "Valor do desconto: %.2f\nValor final: %.2f\n",vlra,imp,vlrc,desc,vlrf);
    
    if(vlrf<=50.0){
        printf("Classificação: Barato");
    }
    else{
        if(vlrf>50.0 && vlrf<100.0){
            printf("Classificação: Normal");
        }
        else{
            printf("Classificação: Caro");
        }
    }
    return (0);
}

