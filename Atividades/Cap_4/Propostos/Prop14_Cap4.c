#include <stdio.h>
#include <stdlib.h>



int main() {

    float sal,nsal;
    
    printf("Digite o valor do salário atual: ");
    scanf("%f",&sal);
    
    if(sal<=300.0){
        nsal=sal*1.5;
    }
    if(sal>300.0 && sal<=500.0){
        nsal=sal*1.4;
    }
    if(sal>500.0 && sal<=700.0){
        nsal=sal*1.3;
    }
    if(sal>700.0 && sal<=800.0){
        nsal=sal*1.2;
    }
    if(sal>800.0 && sal<=1000.0){
        nsal=sal*1.1;
    }
    if(sal>1000.0){
        nsal=sal*1.05;
    }
    printf("Valor do salário reajustado: %.2f\n",nsal);
    
    return (0);
}

