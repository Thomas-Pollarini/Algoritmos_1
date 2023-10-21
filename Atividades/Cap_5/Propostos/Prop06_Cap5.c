#include <stdio.h>
#include <stdlib.h>


int main() {
    
    float vlrv=0,vlrp=0,vlrt=0,vlrc,vlr1=0;
    char trans;
    
    for(int i=0;i<15;i++){
        
        printf("Digite o valor da transação: ");
        scanf("%f",&vlrc);
        printf("Digite o código de transação: ");
        scanf(" %c",&trans);
        
        
        if(trans==86){ //V=86
            vlrv=vlrv+vlrc;
        
        }
        if(trans==80){ //P=80
            vlrp=vlrp+vlrc;
            vlr1=vlr1+ vlrc/3;
            
        }
        
    }
    vlrt=vlrp+vlrv;
    
    printf("Valor total das compras à vista: %.2f\nValor total das compras a prazo: %.2f\nValor total das compras efetuadas: %.2f\n"
            "Valor da primeira prestação das compras a prazo juntas: %.2f\n",vlrv,vlrp,vlrt,vlr1);
    

    return (0);
}

