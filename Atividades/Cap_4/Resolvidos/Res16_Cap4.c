#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    int vm;
    float vp,vf;
    
    printf("Digite o valor do produto: ");
    scanf("%f",&vp);
    printf("Digite a venda média mensal do produto: ");
    scanf("%d",&vm);
    
    if(vm<500 || vp<30.0){
        vf=vp*1.1;
    }
    else{
        if((vm>=500 && vm<1200)||(vp>=30.0 && vp<80.0)){
            vf=vp*1.15;
            }
        else{
            if(vm>=1200 || vp>=80.0){
            vf=vp*0.8;
            }
        }
    }
    printf("O novo preço do produto é: %.2f",vf);
    
    return (0);
}

