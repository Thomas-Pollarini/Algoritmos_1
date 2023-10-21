#include <stdio.h>
#include <stdlib.h>


int main() {

    float fab,imp,dist,vlr;
    
    printf("Digite o preço de fábrica: ");
    scanf("%f",&fab);
    
    if(fab<=12000.0){
        dist=fab*0.05;
        imp=0;
    }
    if(fab>12000.0 && fab<=25000.0){
        dist=fab*0.10;
        imp=fab*0.15;
    }
    if(fab>25000.0){
        dist=fab*0.15;
        imp=fab*0.2;
    }
    
    vlr=fab+dist+imp;
        
    printf("Preço do carro: %.2f\n",vlr);
        
    return (0);
}

