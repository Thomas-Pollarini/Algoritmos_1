#include <stdio.h>
#include <stdlib.h>

#define tam 15

int main() {

    int i,vet[tam],vet2[tam],cont;
    
    printf("Preencha o vetor:\n");
    for(i=0;i<tam;i++){
        printf("Digite um número: ");
        scanf("%d",&vet[i]);
        
        if(vet[i]==30){
            vet2[cont]=i;
            cont++;
        }
    }
    
    printf("\nPosições do vetor que tem valor igual 30: ");
    for(i=0;i<cont;i++){
        printf(" %d ",vet2[i]);
    }
    
    return (0);
}

