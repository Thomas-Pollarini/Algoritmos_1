#include <stdio.h>
#include <stdlib.h>

#define tam 5

int i,j;

void ordem_crescente(float *vet){
    
    float aux;
    
    for(i=0;i<tam;i++){
        for(j=0;j<tam-1;j++){
            if(vet[j]>vet[j+1]){
                aux=vet[j+1];
                vet[j+1]=vet[j];
                vet[j]=aux;
            }
        }
        
        
    }
    
    
}

int main() {

    float vet[tam];
    
    printf("Preencha o vetor:\n");
    for(i=0;i<tam;i++){
        scanf("%f",&vet[i]);
    }
    
    ordem_crescente(&vet);
    
    printf("\nVETOR RESULTANTE: ");
    for(i=0;i<tam;i++){
        printf(" %.3f ",vet[i]);
    }
    
    return (0);
}

