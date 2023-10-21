#include <stdio.h>
#include <stdlib.h>


int main() {

    float vlr,desc,vlrf;
    
    printf("Digite o preço atual do produto: ");
    scanf("%f",&vlr);
    
    if(vlr<=30.0){
        desc=0;
    }
    if(vlr>30.0 && vlr<=100.0){
        desc=vlr*0.1;
    }
    if(vlr>100.0){
        desc=vlr*0.15;
    }
    
    vlrf=vlr-desc;
    
    printf("Valor do desconto: %.2f\nNovo preço do produto: %.2f\n",desc,vlrf);
    
    
    return (0);
}

