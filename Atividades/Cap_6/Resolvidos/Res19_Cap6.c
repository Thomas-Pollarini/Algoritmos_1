#include <stdio.h>
#include <stdlib.h>

#define tam 20

int main() {

    int i,j,aux;
    char A[tam],B[tam];
    
    printf("preencha o vetor A:\n");
    for(i=0;i<tam;i++){
        printf("Digite um caractere: ");
        scanf(" %c",&A[i]);
    }
    printf("preencha o vetor B:\n");
    for(i=0;i<tam;i++){
        printf("Digite um caractere: ");
        scanf(" %c",&B[i]);
    }
    
    printf("\n\nANTES DA TROCA:\n\nVetor A: ");
    for(i=0;i<tam;i++){
        printf(" %c ",A[i]);
    }
    printf("\nVetor B: ");
    for(i=0;i<tam;i++){
        printf(" %c ",B[i]);
    }
    
    j=tam-1;
    
    for(i=0;i<tam;i++){
        aux=A[i];
        A[i]=B[j];
        B[j]=aux;
        j--;
    }
    
    printf("\n\nDEPOIS DA TROCA:\n\nVetor A: ");
    for(i=0;i<tam;i++){
        printf(" %c ",A[i]);
    }
    printf("\nVetor B: ");
    for(i=0;i<tam;i++){
        printf(" %c ",B[i]);
    }
    return (0);
}

