#include <stdio.h>
#include <stdlib.h>

#define tam 20

float soma_vetor(int *vet){
    
    int i,soma=0;
    
    for(i=0;i<tam;i++){
        soma+=vet[i];
    }
    
    return soma;
}

int main() {

    int i;
    float soma,vet[tam];
    
    printf("Preencha o vetor:\n");
    for(i=0;i<tam;i++){
        printf("Posição[%d]: ",i);
        scanf("%d",&vet[i]);
    }
    
    soma=soma_vetor(&vet);
    
    printf("\nSoma dos elementos: %f\n",soma);
    


    return (0);
}
