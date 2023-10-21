#include <stdio.h>
#include <stdlib.h>

#define tam 10

int main() {

    int i,cod[tam],cont;
    float vlr[tam],nvlr[tam];
    
    for(i=0;i<tam;i++){
        printf("Digite o código do produto: ");
        scanf("%d",&cod[i]);
        printf("Digite o preço do produto: ");
        scanf("%f",&vlr[i]);
    }
    printf("\nProdutos que receberão aumento:\n");
    for(i=0;i<tam;i++){
        if(cod[i]%2==0 && vlr[i]>1000){
            nvlr[i]=vlr[i]*1.20;
            printf("\nCódigo: %d\nNovo preço: %.2f\n",cod[i],nvlr[i]);
        }else{
            if(cod[i]%2==0){
                nvlr[i]=vlr[i]*1.15;
                printf("\nCódigo: %d\nNovo preço: %.2f\n",cod[i],nvlr[i]);
            }
            if(vlr[i]>1000){
                nvlr[i]=vlr[i]*1.10;
                printf("\nCódigo: %d\nNovo preço: %.2f\n",cod[i],nvlr[i]);
            }
        }
        
    }
    
    return (0);
}

