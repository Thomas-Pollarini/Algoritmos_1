#include <stdio.h>
#include <stdlib.h>

#define tam 3



void perfeito(int *vet){
    
    int i,num,cont=0,soma;
    
    num=2;
    while(cont<tam){
        
        soma=0;
        for(i=1;i<num;i++){
            if(num%i==0){
                soma+=i;
            }
        }
        if(soma==num){
            vet[cont]=num;
            cont++;
        }
        num++;
    }
}

int main() {

    int i,vet[tam];
    
    perfeito(&vet);
    
    printf("\nVetor: ");
    for(i=0;i<tam;i++){
        printf(" %d ",vet[i]);
    }
    
    return (0);
}

