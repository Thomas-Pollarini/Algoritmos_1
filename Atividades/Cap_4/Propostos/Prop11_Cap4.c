#include <stdio.h>
#include <stdlib.h>

int main() {

    float sal,nsal,aum;
    
    printf("Digite o valor do salário atual: ");
    scanf("%f",&sal);
    
    if(sal<=300.0){
        aum=sal*0.15;
    }
    if(sal>300.0 && sal<600.0){
        aum=sal*0.10;
    }
    if(sal>=600.0 && sal<=900.0){
        aum=sal*0.05;
    }
    if(sal>900.0){
        aum=0;
    }
    
    nsal=sal+aum;
    
    printf("Valor do aumento: %.2f\nValor do novo salário: %.2f\n",aum,nsal);
    
    return (0);
}

