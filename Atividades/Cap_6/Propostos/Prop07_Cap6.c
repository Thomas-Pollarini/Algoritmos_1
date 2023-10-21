#include <stdio.h>
#include <stdlib.h>

#define tam 10

int main() {

    int i,vet[tam],cont=0,soma=0;
    
    printf("Preencha o vetor:\n");
    for(i=0;i<tam;i++){
        printf("Digite um número: ");
        scanf("%d",&vet[i]);
        
        if(vet[i]<0){
            cont++;
        }else{
            soma+=vet[i];
        }
    }
    printf("\nQuantidade de números negativos: %d\nSoma de todos os números positivos: %d\n",cont,soma);
    
    return (0);
}

