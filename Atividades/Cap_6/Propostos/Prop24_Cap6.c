#include <stdio.h>
#include <stdlib.h>

#define tam 15

int main() {

    int i,j,cont,cont2=0,vet[tam],res[tam];
    
    for(i=0;i<tam;i++){
        printf("Digite um número: ");
        scanf("%d",&vet[i]);
        cont=0;
        for(j=1;j<=vet[i];j++){
            if(vet[i]%j==0){
                cont++;
            }
        }
        if(cont==2){
            res[cont2]=vet[i];
            cont2++;
        }
     }
    printf("Vetor resultante: ");
    for(i=0;i<cont2;i++){
        printf(" %d ",res[i]);
    }
    
    
    return (0);
}

