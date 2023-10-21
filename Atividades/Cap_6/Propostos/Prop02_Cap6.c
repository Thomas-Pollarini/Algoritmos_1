#include <stdio.h>
#include <stdlib.h>

#define tam 7

int main() {

    int i,vet[tam];
    
    printf("Preencha o vetor:\n");
    for(i=0;i<tam;i++){
        printf("Digite um número: ");
        scanf("%d",&vet[i]);
    }
    
    printf("\nMúltiplos de 2: ");
    for(i=0;i<tam;i++){
        if(vet[i]%2==0){
            printf(" %d ",vet[i]);
        }
    }
    printf("\nMúltiplos de 3: ");
    for(i=0;i<tam;i++){
        if(vet[i]%3==0){
            printf(" %d ",vet[i]);
        }
    }
    printf("\nMúltiplos de 2 e 3: ");
    for(i=0;i<tam;i++){
        if(vet[i]%2==0 && vet[i]%3==0){
            printf(" %d ",vet[i]);
        }
    }
    
    
    return (0);
}

