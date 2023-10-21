#include <stdio.h>
#include <stdlib.h>

#define lin 10
#define col 20

int main() {
    
    int i,j,soma,rsoma[lin],mat[lin][col],res[lin][col];
    
    printf("Preencha a matriz:\n");
    for(i=0;i<lin;i++){
        soma=0;
        printf("Linha %d:\n",i);
        for(j=0;j<col;j++){
            scanf("%d",&mat[i][j]);
            soma+=mat[i][j];
        }
        rsoma[i]=soma;
    }
    
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            res[i][j]=mat[i][j]*rsoma[i];
        }
    }
    
    printf("\nMatriz resultante:");
    for(i=0;i<lin;i++){
        printf("\nLinha %d: ",i);
        for(j=0;j<col;j++){
            printf(" %d ",res[i][j]);
        }
    }    
    

    return (0);
}

