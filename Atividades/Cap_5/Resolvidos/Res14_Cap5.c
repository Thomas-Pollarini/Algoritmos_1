#include <stdio.h>
#include <stdlib.h>

int main() {

    int qntdp=1,juros=0;
    float vlrd,vlrj,vlrp;
    
    
    printf("Digite o valor da dívida: ");
    scanf("%f",&vlrd);
    
    vlrj=juros;
    vlrp=vlrd/qntdp;
    
    printf("Valor da dívida:          Valor do juros:      Quantidade de parcelas:        Valor da parcela:   \n"
            "   %7.2f                  %7.2f                      %d                          %7.2f        \n",vlrd,vlrj,qntdp,vlrp);
    
    qntdp=qntdp+2;
    juros=juros+10;
    
    for(int i=0;i<4;i++){
        
        vlrj=vlrd*(juros/100.0);
        vlrp=vlrd/qntdp;
                
        printf("   %.2f                   %.2f                      %d                           %.2f        \n",vlrd,vlrj,qntdp,vlrp);
        
        qntdp=qntdp+3;
        juros=juros+5;
    }
    
    return (0);
}

