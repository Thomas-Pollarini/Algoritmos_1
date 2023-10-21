#include <stdio.h>
#include <stdlib.h>

#define tam 8

int main() {

    int i,cod[tam],dvd[tam],free[i];
    
    for(i=0;i<tam;i++){
        printf("Digite o código do cliente: ");
        scanf("%d",&cod[i]);
        printf("Digite a quantidade de DVDs alocados: ");
        scanf("%d",&dvd[i]);
        
        free[i]=dvd[i]/10;
    }
    
    for(i=0;i<tam;i++){
        printf("\nCódigo: %d\nNúmero de alocações gratis: %d\n",cod[i],free[i]);
    }
                
    
    return (0);
}

