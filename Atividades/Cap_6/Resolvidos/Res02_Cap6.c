#include <stdio.h>
#include <stdlib.h>

#define tam 10


int main() {

    int qntd[tam],maior,cod;
    float vlru[tam],vlrt[tam],vlrf=0,com;
    
    
    int i;
    for(i=0;i<tam;i++){
        
        printf("Digite a quantidade vendida do produto %d: ",i+1);
        scanf("%d",&qntd[i]);
        printf("Digite o valor unitário do produto: ");
        scanf("%f",&vlru[i]);
        
        vlrt[i]=vlru[i]*qntd[i];
        vlrf=vlrf+vlrt[i];
        
        if(i==0){
        maior=qntd[0];
        cod=0;
        }else{
            if(qntd[i]>maior){
                maior=qntd[i];
                cod=i;
            }
        }
    }
    
    for(i=0;i<tam;i++){
    printf("\nProduto %d:\nQuantidade vendida: %d\nValor unitário: %.2f\nValor total: %.2f\n",i+1,qntd[i],vlru[i],vlrt[i]);
    }
    
    com=vlrf*0.05;
    
    printf("\nValor geral das vendas: %.2f\nComissão do vendedor: %.2f\n\nValor do produto mais vendido: %.2f\nProduto: %d\n",vlrf,com,vlru[cod],cod);
    
    
    
    return (0);
}

