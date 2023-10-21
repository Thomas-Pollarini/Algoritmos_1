#include <stdio.h>
#include <stdlib.h>

#define tam 10

int main() {

    int i,cont,vet[tam],pos[tam];
    
    for(i=0;i<tam;i++){
        printf("Digite um número: ");
        scanf("%d",&vet[i]);
        
        if(vet[i]>=0){
            pos[cont]=vet[i];
            cont++;
        }
        
    }
    printf("Vetor resultante: ");
    for(i=0;i<cont;i++){
        printf(" %d ",pos[i]);
    }
    
    
    
    return (0);
}

