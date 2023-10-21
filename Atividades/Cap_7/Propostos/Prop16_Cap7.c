#include <stdio.h>
#include <stdlib.h>

#define lin 5
#define col 5

int main() {

    int i,j,vet[lin],vet2[col],mat[lin][col];
    
    printf("Preencha a matriz:\n");
    for(i=0;i<lin;i++){
        vet[i]=0;
        printf("Linha %d:\n",i);
        for(j=0;j<col;j++){
            scanf("%d",&mat[i][j]);
            if(i==0){
                vet2[j]=0;
            }
            vet[i]+=mat[i][j];
            vet2[j]+=mat[i][j];
        }
    }
    
    printf("\nMATRIZ:");
    for(i=0;i<lin;i++){
        printf("\nLinha %d: ",i);
        for(j=0;j<col;j++){
            printf(" %d ",mat[i][j]);
        }
    }
    printf("\nVETOR LINHA: ");
    for(i=0;i<lin;i++){
        printf(" %d ",vet[i]);
    }
    printf("\nVETOR COLUNA: ");
    for(i=0;i<col;i++){
        printf(" %d ",vet2[i]);
    }

    return (0);
}

