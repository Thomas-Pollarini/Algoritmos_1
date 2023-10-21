
#include <stdio.h>
#include <stdlib.h>

#define tam 15

int main() {
    
    int i,maior,maiorcod,menor,menorcod,vet[tam];
    
    
    printf("Preencha o vetor:\n");
    for(i=0;i<tam;i++){
        
        printf("Digite um número: ");
        scanf("%d",&vet[i]);
        
        if(i==0){
            maior=vet[i];
            maiorcod=i;
            menor=vet[i];
            menorcod=i;
        }else{
            if(vet[i]>maior){
                maior=vet[i];
                maiorcod=i;
            }
            if(vet[i]<menor){
                menor=vet[i];
                menorcod=i;
            }
        }
    }
    printf("\nMaior número: %d\nPosição: %d\nMenor número: %d\nPosição: %d",maior,maiorcod,menor,menorcod);
    
    return (0);
}

