#include <stdio.h>
#include <stdlib.h>

#define tam 10

int i,j;


int uniao(int *vet,int *vet2,int *vet3){
    
    int cont;
    
    j=0;
    for(i=0;i<tam;i++){
        cont=0;
        while(cont<j && vet[i]!=vet3[cont]){
            cont++;
        }
        if(cont==j){
            vet3[j]=vet[i];
            j++;
        }
    }
    for(i=0;i<tam;i++){
        cont=0;
        while(cont<j && vet2[i]!=vet3[cont]){
            cont++;
        }
        if(cont==j){
            vet3[j]=vet2[i];
            j++;
        }
    }
    
    return j;
}

int main() {

    int cont,vet[tam],vet2[tam],vet3[tam*2];
    
    printf("Preencha o primeiro vetor:\n");
    for(i=0;i<tam;i++){
        scanf("%d",&vet[i]);
    }
    printf("Preencha o segundo vetor vetor:\n");
    for(i=0;i<tam;i++){
        scanf("%d",&vet2[i]);
    }
    
    cont=uniao(&vet,&vet2,&vet3);
    
    printf("\nVETOR RESULTANTE: ");
    for(i=0;i<cont;i++){
        printf(" %d ",vet3[i]);
    }
    
    return (0);
}

