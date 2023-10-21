#include <stdio.h>
#include <stdlib.h>

#define tam 5

int main() {

    int i,j,aux,vet1[tam],vet2[tam],vet3[tam*2];
    
    printf("Digite os valores do primeiro vetor:\n");
    for(i=0;i<tam;i++){
        scanf("%d",&vet1[i]);
    }
    printf("Digite os valores do segundo vetor:\n");
    for(i=0;i<tam;i++){
        scanf("%d",&vet2[i]);
    }
    for(i=0;i<tam;i++){
        for(j=0;j<tam-1;j++){
            if(vet1[j+1]<vet1[j]){
                aux=vet1[j];
                vet1[j]=vet1[j+1];
                vet1[j+1]=aux;
            }
        
            if(vet2[j+1]<vet2[j]){
                aux=vet2[j];
                vet2[j]=vet2[j+1];
                vet2[j+1]=aux;
            }
        }
        
    }
    
    
    aux=0;
    for(i=0;i<tam;i++){
        vet3[aux]=vet1[i];
        vet3[aux+1]=vet2[i];
        aux+=2;
    }
    
    aux=0;
    for(i=0;i<tam*2;i++){
        for(j=0;j<(tam*2)-1;j++){
            if(vet3[j+1]<vet3[j]){
                aux=vet3[j];
                vet3[j]=vet3[j+1];
                vet3[j+1]=aux;
            } 
        }
    }
    
    
    printf("\nVetor 1 ordenadado: ");
    for(i=0;i<tam;i++){
        printf(" %d ",vet1[i]);
    }
    printf("\nVetor 2 ordenadado: ");
    for(i=0;i<tam;i++){
        printf(" %d ",vet2[i]);
    }
    printf("\nVetor 3: ");
    for(i=0;i<tam*2;i++){
        printf(" %d ",vet3[i]);
    }
    return (0);
}

