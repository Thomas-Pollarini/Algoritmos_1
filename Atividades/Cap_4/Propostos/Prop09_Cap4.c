#include <stdio.h>
#include <stdlib.h>


int main() {

    float sal,cre;
    
    printf("Digite o valor do saldo médio: ");
    scanf("%f",&sal);
    
    if(sal>400.0){
        cre=sal*0.30;
    }
    if(sal>300.0 && sal<=400.0){
        cre=sal*0.25;
    }
    if(sal>200.0 && sal<=300.0){
        cre=sal*0.20;
    }
    if(sal<=200.0){
        cre=sal*0.10;
    }
    
    printf("Saldo médio: %.2f\nValor do crédito: %.2f\n",sal,cre);
    
    return (0);
}

