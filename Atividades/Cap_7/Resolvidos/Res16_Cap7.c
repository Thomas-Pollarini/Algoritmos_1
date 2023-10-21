#include <stdio.h>
#include <stdlib.h>

#define tam 10

int main() {

    int i,j,maior,menor,vet[tam],vet2[tam],mat[tam][tam];
    
    printf("Preencha a matriz:");
    for(i=0;i<tam;i++){
        printf("\nLinha %d:\n",i);
        for(j=0;j<tam;j++){
            scanf("%d",&mat[i][j]);
            
            if(j==0){
                maior=mat[i][j];
            }else{
                if(mat[i][j]>maior){
                    maior=mat[i][j];
                }
            }
        }
        vet[i]=maior;
    }
   
    for (i= 0; i< tam; i++) {
        for(j=0;j<tam;j++){
            if(j==0){
                menor=mat[j][i];
            }else{
                if(mat[j][i]<menor){
                    menor=mat[j][i];
                }
            }
        }
        vet2[i]=menor;
    }
    
    printf("\nMATRIZ:");
    for(i=0;i<tam;i++){
        printf("\nLinha %d: ",i);
        for(j=0;j<tam;j++){
            printf(" %d ",mat[i][j]);
        }
    }
    printf("\n\nVETOR 1: ");
    for(i=0;i<tam;i++){
        printf(" %d ",vet[i]);
    }
    printf("\n\nVETOR 2: ");
    for(i=0;i<tam;i++){
        printf(" %d ",vet2[i]);
    }
    return (0);
}

