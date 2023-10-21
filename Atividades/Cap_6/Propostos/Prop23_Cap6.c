#include <stdio.h>
#include <stdlib.h>

#define tam 5

int main() {
    
    
    int i,j,vet1[tam],vet2[tam],res[tam];
    
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
    j=4;
    for(i=0;i<tam;i++){
        res[i]=vet2[j]-vet1[i];
        j--;
    }
    printf("Vetor resultante:");
    for(i=0;i<tam;i++){
        printf(" %d ",res[i]);
    }
    
    return (0);
}

