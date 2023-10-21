#include <stdio.h>
#include <stdlib.h>

#define tam 10

int main() {

    int i,j,aux,vet1[tam],vet2[tam],vet3[tam*2];
    
    printf("Preencha o primeiro vetor:\n");
    for(i=0;i<tam;i++){
        printf("Digite um número: ");
        scanf("%d",&vet1[i]);
    }
    printf("Preencha o segundo vetor:\n");
    for(i=0;i<tam;i++){
        printf("Digite um número: ");
        scanf("%d",&vet2[i]);
    }
    j=0;
    for(i=0;i<tam;i++){
        vet3[j]=vet1[i];
        vet3[j+1]=vet2[i];
        j+=2;
    }
    for(i=0;i<tam*2;i++){
        for(j=0;j<(tam*2)-1;j++){
            if(vet3[j]<vet3[j+1]){
                aux=vet3[j];
                vet3[j]=vet3[j+1];
                vet3[j+1]=aux;
            }
        }
        
    }
    printf("Vetor 3: ");
    for(i=0;i<tam*2;i++){
        printf(" %d ",vet3[i]);
    }
    
    
    
    return (0);
}

