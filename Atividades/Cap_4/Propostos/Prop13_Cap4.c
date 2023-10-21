#include <stdio.h>
#include <stdlib.h>



int main() {

    float vlrp,aum;
    
    printf("Digite o preço do produto: ");
    scanf("%f",&vlrp);
    
    if(vlrp<=50.0){
        aum=vlrp*0.05;
    }
    if(vlrp>50.0 && vlrp<=100.0){
        aum=vlrp*0.1;
    }
    if(vlrp>100.0){
        aum=vlrp*0.15;
    }
    vlrp=vlrp+aum;
    
    printf("Novo preço: %.2f\n",vlrp);
    
    if(vlrp<=80.0){
        printf("Classificação: Barato\n");
    }
    if(vlrp>80.0 && vlrp<=120.0){
        printf("Classificação: Normal\n");
    }
    if(vlrp>120.0 && vlrp<=200.0){
        printf("Classificação: Caro\n");
    }
    if(vlrp>200.0){
        printf("Classificação: Muito caro\n");
    }
    
    return (0);
}

