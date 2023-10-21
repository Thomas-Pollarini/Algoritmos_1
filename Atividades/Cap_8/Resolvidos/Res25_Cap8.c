#include <stdio.h>
#include <stdlib.h>

#define tam 25

void substituir(int *vet){
    
    int i;
    
    for(i=0;i<tam;i++){
        if(vet[i]<0){
            vet[i]=0;
        }
    }
    
}

int main() {

    int i,vet[tam];
    
    printf("Preencha o vetor:\n");
    for(i=0;i<tam;i++){
        printf("Posição[%d]: ",i);
        scanf("%d",&vet[i]);
    }
    
    substituir(&vet);
    
    printf("\nVETOR RESULTANTE: ");
    for(i=0;i<tam;i++){
        printf(" %d ",vet[i]);
    }
    
    return (0);
}

