#include <stdio.h>
#include <stdlib.h>

#define tam 10

int main() {

    int i,aux,vet[tam];
    
    for(i=0;i<tam;i++){
        printf("Digite um número: ");
        scanf("%d",&vet[i]);
    }
    for(i=0;i<tam;i++){
        
        for(int j=0;j<(tam-1);j++){
            if(vet[j]<vet[j+1]){
                aux=vet[j];
                vet[j]=vet[j+1];
                vet[j+1]=aux;
            }
        }
        
    }
    printf("Vetor ordem decrescente: ");
    for(i=0;i<tam;i++){
        printf(" %d ",vet[i]);
    }
    
    return (0);
}

