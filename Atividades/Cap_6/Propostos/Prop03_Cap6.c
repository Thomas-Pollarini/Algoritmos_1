#include <stdio.h>
#include <stdlib.h>

#define tam 10

int main() {
    
    int i,m,cliente,prod,qtd,cont,cod[tam],est[tam];

    for(i=0;i<tam;i++){
        printf("Digite o código do produto: ");
        scanf("%d",&cod[i]);
        printf("Digite a quantidade do produto em estoque: ");
        scanf("%d",&est[i]);
    }
    printf("\nDigite o código do cliente: ");
    scanf("%d",&cliente);
    while(cliente!=0){
        
        printf("Digite o código do produto: ");
        scanf("%d",&prod);
        printf("Digite a quantidade que deseja comprar: ");
        scanf("%d",&qtd);
        
        cont=0;        
        for(i=0;i<tam;i++){
            if(cod[i]==prod){
                cont=1;
                m=i;
            }
        }
        if(cont!=1){
            printf("\nCÓDIGO INEXISTENTE\n");
        }else{
            if(qtd>est[m]){
                printf("\nNão temos estoque suficiente dessa mercadoria.\n");
            }
            else{
                printf("\nPedido atendido. Obrigado e volte sempre.\n");
                est[m]-=qtd;
            }
        }
       
        printf("\nDigite o código do cliente: ");
        scanf("%d",&cliente);
    }
    for(i=0;i<tam;i++){
        printf("\nCódigo do produto: %d\nQuantidade em estoque: %d\n",cod[i],est[i]);
    }
    return (0);
}

