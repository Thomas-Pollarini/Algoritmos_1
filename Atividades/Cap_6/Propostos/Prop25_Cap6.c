#include <stdio.h>
#include <stdlib.h>

#define tam 15

int main() {

    int i,vet[tam];
    float maior,res[tam];
    
    for(i=0;i<tam;i++){
        printf("Digite um número: ");
        scanf("%d",&vet[i]);
        
        if(i==0){
            maior=vet[i];
        }else{
            if(vet[i]>maior){
                maior=vet[i];
            }
        }
    }
    for(i=0;i<tam;i++){
        res[i]=vet[i]/maior;
    }
    printf("Vetor resultante: ");
    for(i=0;i<tam;i++){
        printf(" %.3f ",res[i]);
    }
    
    
    return (0);
}

