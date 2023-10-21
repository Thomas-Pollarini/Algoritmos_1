#include <stdio.h>
#include <stdlib.h>

#define tam 10

int i,j;

void fatorial(int *vet, int *vet2){
    
    for(i=0;i<tam;i++){
        vet2[i]=1;
        for(j=1;j<=vet[i];j++){
            vet2[i]*=j;
        }
    }
}

int main() {

    int vet[tam],vet2[tam];
    
    printf("Preencha o vetor:\n");
    for(i=0;i<tam;i++){
        scanf("%d",&vet[i]);
    }
    fatorial(&vet,&vet2);
    printf("\nVETOR FATORIAL: ");
    for(i=0;i<tam;i++){
        printf(" %d ",vet2[i]);
    }
    
    return (0);
}

