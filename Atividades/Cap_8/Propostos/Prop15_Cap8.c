#include <stdio.h>
#include <stdlib.h>

#define tam 15

int contador_par(int *vet){
    
    int i,cont=0;
    
    for(i=0;i<tam;i++){
        if(vet[i]%2==0){
            cont++;            
        }
    }
    
    return cont;
}

int main() {

    int i,cont,vet[tam];
    
    printf("Preencha o vetor:\n");
    for(i=0;i<tam;i++){
        printf("Posição[%d]: ",i);
        scanf("%d",&vet[i]);
    }
    
    cont=contador_par(&vet);
    
    printf("\nQnt de elementos pares: %d\n",cont);
    
    return (0);
}

