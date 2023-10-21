#include <stdio.h>
#include <stdlib.h>


 
int main() {

    
    int nump=1,juros=3;
    float vlr,vlrf,vlrp;
    
    printf("Digite o vallor do carro: ");
    scanf("%f",&vlr);
    
    printf("Quantidade de parcelas:      Preço final:          Valor da parcela: \n");
    
    vlrf=vlr*0.8;
    vlrp=vlrf;
    
    printf("          %d                       %.2f                    %.2f\n",nump,vlrf,vlrp);
    
    nump=nump+5;
    
    for(int i=0;i<10;i++){
        
        
        vlrf=vlr+(vlr*(juros/100.0));
        vlrp=vlrf/nump;
        
        printf("          %d                      %.2f                    %.2f\n",nump,vlrf,vlrp);
        
        juros=juros+3;
        nump=nump+6;
        
    }
    
    
    
    return (0);
}

