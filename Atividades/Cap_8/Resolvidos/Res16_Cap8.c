#include <stdio.h>
#include <stdlib.h>

#define tam 10

int i,j;

int ordem_decrescente(int *vet,int *vet2,int *vet3){
    
    int aux;
    j=0;
    for(i=0;i<tam;i++){
        vet3[j]=vet[i];
        vet3[j+1]=vet2[i];
        j+=2;
    }
    for(i=0;i<tam*2;i++){
        for(j=0;j<tam*2-1;j++){
            if(vet3[j]<vet3[j+1]){
                aux=vet3[j+1];
                vet3[j+1]=vet3[j];
                vet3[j]=aux;
            }
        }
    }
    
}

int main() {

    int vet[tam],vet2[tam],vet3[tam*2];
    
    printf("Preencha o primeiro vetor:\n");
    for(i=0;i<tam;i++){
        scanf("%d",&vet[i]);
    }
    printf("Preencha o segundo vetor vetor:\n");
    for(i=0;i<tam;i++){
        scanf("%d",&vet2[i]);
    }
    
    ordem_decrescente(&vet,&vet2,&vet3);
    
    printf("\nVETOR C: ");
    for(i=0;i<tam*2;i++){
        printf(" %d ",vet3[i]);
    }
    
    return (0);
}

