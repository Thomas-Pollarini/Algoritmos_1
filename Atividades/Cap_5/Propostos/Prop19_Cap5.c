#include <stdio.h>
#include <stdlib.h>


int main() {

    int cont1=0,cont2=0;
    float vlrc,vlrv,lucro,lucrot=0;
    char tipo;
    
    printf("Digite o tipo de ação: ");
    scanf("%c",&tipo);
    
    while(tipo!=70){
        
        printf("Digite o preço de compra: ");
        scanf("%f",&vlrc);
        printf("Digite o preço de venda: ");
        scanf("%f",&vlrv);
        
        lucro=vlrv-vlrc;
        lucrot=lucrot+lucro;
        
        printf("Valor lucrado: %.2f\n",lucro);
        
        if(lucro>1000){
            cont1++;
        }
        if(lucro<200){
            cont2++;
        }
        
        printf("Digite o tipo de ação: ");
        scanf(" %c",&tipo);  
    }
    
    printf("Quantidade de ações com lucro superior a R$ 1.000,00: %d\n"
            "Quantidade de ações com lucro inferior a R$ 200,00: %d\n"
            "Lucro total: %.2f\n",cont1,cont2,lucrot);
    
    return (0);
}

