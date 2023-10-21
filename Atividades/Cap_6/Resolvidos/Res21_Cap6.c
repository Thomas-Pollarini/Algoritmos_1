#include <stdio.h>
#include <stdlib.h>

#define tam1 15
#define tam2 5

int main() {

    int i,j,vet[tam1],p[tam2],I[tam2],cont1=0,cont2=0;
    
    printf("Preencha o vetor:\n ");
    for(i=0;i<tam1;i++){
        printf("Digite um número: ");
        scanf("%d",&vet[i]);
    }
    for(i=0;i<tam1;i++){
        if(vet[i]%2==0){
            p[cont1]=vet[i];
            cont1++;
            if(cont1==tam2){
                printf("\nVetor P: ");
                for(j=0;j<tam2;j++){
                    printf(" %d ",p[j]);
                }
                cont1=0;
            }
        }else{
            I[cont2]=vet[i];
            cont2++;
            if(cont2==tam2){
                printf("\nVetor I: ");
                for(j=0;j<tam2;j++){
                    printf(" %d ",I[j]);
                }
                cont2=0;
            }
        }
        
    }
    if(cont1!=0){
        printf("\nVetor P: ");
                for(j=0;j<cont1;j++){
                    printf(" %d ",p[j]);
                }
    }
    if(cont2!=0){
        printf("\nVetor I: ");
                for(j=0;j<cont2;j++){
                    printf(" %d ",I[j]);
                }
    }
    
    
    return (0);
}

