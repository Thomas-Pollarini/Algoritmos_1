#include <stdio.h>
#include <stdlib.h>

#define tam 10

int main() {
    
    int i,vet1[tam],vet2[tam];
    
    for(i=0;i<tam;i++){
        printf("Digite um número: ");
        scanf("%d",&vet1[i]);
        
        if(vet1[i]==0){
            vet2[i]=1;
        }else{
            vet2[i]=vet1[i];
        }
        
    }
    printf("Vetor 2: ");
    for(i=0;i<tam;i++){
        printf(" %d ",vet2[i]);
    }
    

    return (0);
}

