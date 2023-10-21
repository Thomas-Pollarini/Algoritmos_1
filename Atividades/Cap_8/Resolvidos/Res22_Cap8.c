#include <stdio.h>
#include <stdlib.h>

#define tam 8

int vetor_pos(int *vet,int *vet2){
    
    int i,cont=0;
    
    for(i=0;i<tam;i++){
        if(vet[i]>=0){
            vet2[cont]=vet[i];
            cont++;
        }
    }
    
    return cont;
}

int vetor_neg(int *vet,int *vet3){
    
    int i,cont=0;
    
    for(i=0;i<tam;i++){
        if(vet[i]<0){
            vet3[cont]=vet[i];
            cont++;
        }
    }
    
    return cont;
}

int main() {

    int i,cont,cont2,vet[tam],vet2[tam],vet3[tam];
    
    printf("Preencha o vetor:\n");
    for(i=0;i<tam;i++){
        scanf("%d",&vet[i]);
    }
    
    cont=vetor_pos(&vet,&vet2);
    cont2=vetor_neg(&vet,&vet3);
    
    printf("\nVETOR POSITIVO: ");
    for(i=0;i<cont;i++){
        printf(" %d ",vet2[i]);
    }
    printf("\nVETOR NEGATIVO: ");
    for(i=0;i<cont2;i++){
        printf(" %d ",vet3[i]);
    }
    
    return (0);
}

