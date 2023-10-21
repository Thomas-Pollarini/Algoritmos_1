#include <stdio.h>
#include <stdlib.h>


#define tam 10

int main() {
    
    int vet1[tam],vet2[tam],vet3[tam],cont=0;
    
    printf("Digite os valores do primeiro vetor:\n");
    
    int i;
    for(i=0;i<tam;i++){
        printf("Posição %d: ",i);
        scanf("%d",&vet1[i]);
    }
   
    printf("\nDigite os valores do segundo vetor:\n");
    
    for(i=0;i<tam;i++){
        printf("Posição %d: ",i);
        scanf("%d",&vet2[i]);
    }
    
    for(i=0;i<tam;i++){
        
        vet3[cont]=vet1[i];
        vet3[cont+1]=vet2[i];
        
        cont+=2;
    }
    
    printf("\nVetor 3: ");
    
    for(cont=0;cont<(tam*2);cont++){
        printf(" %d ",vet3[cont]);
    }
    
    return (0);
}

