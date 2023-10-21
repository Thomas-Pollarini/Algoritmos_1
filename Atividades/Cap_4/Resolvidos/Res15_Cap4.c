#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    
    float sal,salb,sall,salm,salf,hrt,hrx,vhrt,vhrx,dep,vdep,imp,gra;
    
    printf("Digite o valor do salário minimo: "); 
    scanf("%f",&salm);
    printf("Digite o número de horas trabalhadas:");
    scanf("%f",&hrt);
    printf("Digite o número de horas extras:");
    scanf("%f",&hrx);
    printf("Digite o número de dependentes:");
    scanf("%f",&dep);
    
    vhrt=salm/5.0;
    sal=hrt*vhrt;
    vdep=dep*32.0;
    vhrx=hrx*(vhrt*1.50);
    salb=sal+vdep+vhrx;
    
    if(salb>500){
        imp=salb*0.2;
    }
    else{
        if(salb>=200.0){
            imp=salb*0.10;
        }
        else{
            imp=0;
        }
    }    
    
    sall=salb-imp;
    
    if(sall<=350.0){
        salf=sall+100;
    }
    else{
        salf=sall+50;
    }
    
    printf("O salário a receber é:%.2f",salf);

    return (0);
}