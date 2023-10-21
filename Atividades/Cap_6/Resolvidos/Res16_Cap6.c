#include <stdio.h>
#include <stdlib.h>

#define tam 10

int main() {

    int i,j,soma,cont1=0,cont2=0,vet1[tam],vet2[tam/2],res1[tam],res2[tam];
    
    printf("Preencha o primeiro vetor: \n");
    for(i=0;i<tam;i++){
        printf("Digite  um número: ");
        scanf("%d",&vet1[i]);
    }
    
    printf("Preencha o segundo vetor: \n");
    for(i=0;i<tam/2;i++){
        printf("Digite  um número: ");
        scanf("%d",&vet2[i]);
    }
    
    for(i=0;i<tam;i++){
        if(vet1[i]%2==0){
            soma=vet1[i];
            for(j=0;j<tam/2;j++){
                soma=soma+vet2[j];
            }
            res1[cont1]=soma;
            cont1++;
        }else{
            soma=vet1[i];
            for(j=0;j<tam/2;j++){
                soma=soma+vet2[j];
            }
            res2[cont2]=soma;
            cont2++;
        }
    }
    printf("Vetor resultante 1: ");
    for(i=0;i<cont1;i++){
        printf(" %d ",res1[i]);
    }
    printf("\nVetor resultante 2: ");
    for(i=0;i<cont2;i++){
        printf(" %d ",res2[i]);
    }
    
    return (0);
}

