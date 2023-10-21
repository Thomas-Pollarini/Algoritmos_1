#include <stdio.h>
#include <stdlib.h>

#define tam 10

int main() {

    int i,cod[tam],total[tam],soma=0,maiorcod,menorcod;
    float perc[tam],vlr[tam],maiorvlr,menorvlr;
    
    for(i=0;i<tam;i++){
        printf("Digite o código do vendedor: ");
        scanf("%d",&cod[i]);
        printf("Digite o total de vendas: ");
        scanf("%d",&total[i]);
        printf("Digite o percentual de comissão: ");
        scanf("%f",&perc[i]);
        
        soma+=total[i];
        
        vlr[i]=total[i]*(perc[i]/100.0);
        
        if(i==0){
            maiorvlr=vlr[i];
            menorvlr=vlr[i];
            maiorcod=cod[i];
            menorcod=cod[i];
        }else{
            if(vlr[i]>maiorvlr){
                maiorvlr=vlr[i];
                maiorcod=cod[i];
            }
            if(vlr[i]<menorvlr){
                menorvlr=vlr[i];
                menorcod=cod[i];
            }
        }
        
    }
    printf("\nRELATÓRIO:\n");
    for(i=0;i<tam;i++){
        printf("\nCódigo do funcionário: %d\nValor da comissão: %.2f\n",cod[i],vlr[i]);
    }
    printf("\nTotal das vendas: %d\n\nMaior comissão: %.2f\nCódigo do funcionário: %d\n\nMenor comissão: %.2f\nCódigo do funcionário: %d\n",soma,maiorvlr,maiorcod,menorvlr,menorcod);
    
    return (0);
}

