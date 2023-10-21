#include <stdio.h>
#include <stdlib.h>

#define tam 5

int main() {

    int i,soma=0,vet[tam];
    
    for(i=0;i<tam;i++){
        printf("Digite o %dº número ",i+1);
        scanf("%d",&vet[i]);
        
        soma+=vet[i];
    }
    printf("Os números digitados foram: %d ",vet[0]);
    for(i=1;i<tam;i++){
        printf("+ %d ",vet[i]);
    }    
    printf("= %d\n",soma);    
 
    return (0);
}

