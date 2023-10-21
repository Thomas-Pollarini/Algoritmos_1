#include <stdio.h>
#include <stdlib.h>

#define tam 6

int main() {

    int i,vet[tam],cont;
    
    printf("Preencha o vetor:\n");
    for(i=0;i<tam;i++){
        printf("Digite um número: ");
        scanf("%d",&vet[i]);
    }
    printf("\nNúmeros pares: ");
    cont=0;
    for(i=0;i<tam;i++){
        if(vet[i]%2==0){
            printf(" %d ",vet[i]);
            cont++;
        }
    }
    printf("\nQuantidade de números pares: %d\n",cont);
    printf("Números ímpares: ");
    cont=0;
    for(i=0;i<tam;i++){
        if(vet[i]%2==1){
            printf(" %d ",vet[i]);
            cont++;
        }
    }
    printf("\nQuantidade de números pares: %d\n",cont);
    return (0);
}

