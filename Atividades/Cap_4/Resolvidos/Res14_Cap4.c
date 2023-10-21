#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float sal,nsal;
    
    printf("Digite o valor do seu salário atual: ");
    scanf("%f",&sal);
    
    if(sal<=500.0){
        nsal=sal*1.05;
    }
    else{
        if(sal<=1200.0){
            nsal=sal*1.12;
        }
        else{
            nsal=sal;
        }
    }
    if(sal<=600){
        nsal=nsal+150;
    }
    else{ 
        nsal=nsal+100;
    }    
    
    printf("O novo salário será: %.2f\n",nsal);
    return (0);
}

