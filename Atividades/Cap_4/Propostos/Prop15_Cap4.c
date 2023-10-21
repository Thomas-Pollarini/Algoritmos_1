#include <stdio.h>
#include <stdlib.h>



int main() {
    
    int x;
    float vlr;
    
    printf("Digite o valor que será investido: ");
    scanf("%f",&vlr);
    printf("1-Poupança\n2-Fundos de renda fixa\nSelelcione o tipo de investimento: ");
    scanf("%d",&x);
    
    
    switch(x){
        case 1:
            vlr=vlr*1.03;
            printf("Valor após um mês: %.2f\n",vlr);
          break;
        
        case 2:
            vlr=vlr*1.04;
            printf("Valor após um mês: %.2f\n",vlr);
          break;
          
        default:
            printf("ERRO: digite um número de investimento válido.");
          break;  
    }
    

    return (0);
}

