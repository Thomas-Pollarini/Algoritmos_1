#include <stdio.h>
#include <stdlib.h>

#define tam 8

int main() {

    
    int i,j,z,aux,vet[tam];
    
    i=0;
    while(i<tam){
        
        printf("Digite um número: ");
        scanf("%d",&aux);
        
        j=0;
        while(j<i && vet[j]<aux){
            j++;
        }
        z=i;
        while(z>=j+1){
            vet[z]=vet[z-1];
            z--;
        }
        vet[j]=aux;
        i++;
    }
    printf("Vetor: ");
    for(i=0;i<tam;i++){
        printf(" %d ",vet[i]);
    }
    
    
    return (0);
}

