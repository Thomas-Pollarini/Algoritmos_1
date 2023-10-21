#include <stdio.h>
#include <stdlib.h>

#define tam 10

int main() {

    int i,j,cont,num[tam],div[tam/2];
    
    printf("Preencha o primeiro vetor: \n");
    for(i=0;i<tam;i++){
        printf("Digite  um número: ");
        scanf("%d",&num[i]);
    }
    
    printf("Preencha o segundo vetor: \n");
    for(i=0;i<tam/2;i++){
        printf("Digite  um número: ");
        scanf("%d",&div[i]);
    }
    
    for(i=0;i<tam;i++){
        printf("\nNúmero %d:\n",num[i]);
        cont=0;
        for(j=0;j<tam/2;j++){
            if(num[i]%div[j]==0){
                printf("Divisível por %d na posição %d\n",div[j],j);
                cont++;
            }
        }
        if(cont==0){
            printf("Não possui divisores no segundo vetor.\n");
        }
    }
    
    
    return (0);
}

