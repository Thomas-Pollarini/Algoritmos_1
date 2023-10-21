#include <stdio.h>
#include <stdlib.h>

int main() {

    int cod;
    float nprod,vlru,vlrn,vlrf,desc;
    
    printf("Digite o código do produto comprado: ");
    scanf("%d",&cod);
    printf("Digite a quantidade comprada do produto: ");
    scanf("%f",&nprod);
    
    if(cod>=1 && cod<=10){
        vlru=10.0;
    }
    if(cod>=11 && cod<=20){
        vlru=15.0;
    }
    if(cod>=21 && cod<=30){
        vlru=20.0;
    }
    if(cod>=31 && cod<=40){
        vlru=30.0;
    }
    
    vlrn=vlru*nprod;
    
    if(vlrn<=250.0){
        desc=vlrn*0.05;
    }
    if(vlrn>250.0 && vlrn<=500.0){
        desc=vlrn*0.1;
    }
    if(vlrn>500.0){
        desc=vlrn*0.15;
    }
    
    vlrf=vlrn-desc;
    
    printf("Valor unitário: %.2f\nValor total da nota: %.2f\n"
            "Valor do desconto: %.2f\nValor final: %.2f\n",vlru,vlrn,desc,vlrf);
    
    return (0);
}

