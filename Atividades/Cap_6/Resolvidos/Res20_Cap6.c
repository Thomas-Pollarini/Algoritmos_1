#include <stdio.h>
#include <stdlib.h>

#define tam 5

int main() {

    int i,vet[tam],cod;
    
    printf("Preencha o vetor:\n");
    for(i=0;i<tam;i++){
        printf("Digite um número: ");
        scanf("%d",&vet[i]);
    }
    cod=1;
    while(cod!=0){
    
        printf("\n\nMenu:\n1-Mostrar vetor na ordem direta\n2-Mostrar vetor na ordem inversa\n0-Finalizar programa\nDigite o código: ");
        scanf("%d",&cod);
    
        switch(cod){
        
            case 0:
                return (0);
                break;
             
            case 1:
                printf("\nVetor: ");
                for(i=0;i<tam;i++){
                    printf(" %d ",vet[i]);
                }
                break;
             
            case 2:
                printf("\nVetor: ");
                for(i=tam-1;i>=0;i--){
                    printf(" %d ",vet[i]);
                }
                break;
              
            default:
                printf("\nCódigo inválido, tente novamente.\n");
                break;
        }
    }
    return (0);
}

