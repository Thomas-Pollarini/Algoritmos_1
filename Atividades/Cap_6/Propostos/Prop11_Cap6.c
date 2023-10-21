#include <stdio.h>
#include <stdlib.h>

#define tam 10

int main() {

    int i,cont1=0,cont2=0,vet[tam],res1[tam],res2[tam];
    
    printf("Preencha o vetor:\n");
    for(i=0;i<tam;i++){
        printf("Digite um número: ");
        scanf("%d",&vet[i]);
        
        if(vet[i]%2==0){
            res1[cont1]=vet[i];
            cont1++;
        }else{
            res2[cont2]=vet[i];
            cont2++;
        }
    }
    printf("\nVetor par: ");
    for(i=0;i<cont1;i++){
        printf(" %d ",res1[i]);
    }
    printf("\nVetor ímpar: ");
    for(i=0;i<cont2;i++){
        printf(" %d ",res2[i]);
    }
    
    return (0);
}

