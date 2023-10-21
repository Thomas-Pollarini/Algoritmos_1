#include <stdio.h>
#include <stdlib.h>

#define tam 10

int main() {

    int i,vet1[tam],vet2[tam],vet3[tam];
    
    printf("Preencha o primeiro vetor:\n");
    for(i=0;i<tam;i++){
        printf("Digite um número: ");
        scanf("%d",&vet1[i]);
    }
    printf("Preencha o segundo vetor:\n");
    for(i=0;i<tam;i++){
        printf("Digite um número: ");
        scanf("%d",&vet2[i]);
    }
    
    printf("\nVetor resultante:");
    for(i=0;i<tam;i++){
        vet3[i]=vet1[i]*vet2[i];
        printf(" %d ",vet3[i]);
    }
    
    
    
    return (0);
}

