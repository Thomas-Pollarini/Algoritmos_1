#include <stdio.h>
#include <stdlib.h>


int main() {

    int mes=0;
    float salc,salj;
    
    printf("Digite o valor do salário de Carlos: ");
    scanf("%f",&salc);
    
    salj=salc/3.0;
    
    while(salc>salj){
        
        salc=salc*1.02;
        salj=salj*1.05;
        
        mes++;
    
    }
    
     printf("Número de meses necessários para a que o valor pertencente a \nJoão iguale ou ultrapasse o valor "
            "pertencente a Carlos: %d\n",mes);
     
     printf("Valor pertencente a Carlos: %.2f\nValor pertencente a João: %.2f\n",salc,salj);
    
    
    return (0);
}

