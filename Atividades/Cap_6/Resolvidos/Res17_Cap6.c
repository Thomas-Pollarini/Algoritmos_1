#include <stdio.h>
#include <stdlib.h>

#define tam 6

int main() {

    int i,soma=0,cont=0,vet[tam];
    
    printf("Preencha o vetor:\n");
    for(i=0;i<tam;i++){
        printf("Digite um valor: ");
        scanf("%d",&vet[i]);
    }
    printf("\nRELATÓRIO:\n\nOs números pares são:\n");
    
    for(i=0;i<tam;i++){
        if(vet[i]%2==0){
            printf("número %d na posição %d\n",vet[i],i);
            soma=soma+vet[i];
        }
    }
    printf("\nSoma dos pares = %d\n",soma);
    printf("\nOs números ímpares são:\n");
    
    for(i=0;i<tam;i++){    
        if(vet[i]%2==1){
            printf("número %d na posição %d\n",vet[i],i);
            cont++;
        }     
    }
    printf("\nQuantidade de ímpares = %d\n",cont);
    
    return (0);
}

