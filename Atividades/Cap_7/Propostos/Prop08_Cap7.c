#include <stdio.h>
#include <stdlib.h>

#define lin 3
#define col 8

int main() {

    int i,j,mat[lin][col],mat2[lin][col],soma[lin][col],sub[lin][col];
    
    printf("Preencha a primeira matriz:\n");
    for(i=0;i<lin;i++){
        printf("Linha %d:\n",i);
        for(j=0;j<col;j++){
            scanf("%d",&mat[i][j]);
            
            soma[i][j]=mat[i][j];
            sub[i][j]=mat[i][j];
        }
    }
    printf("Preencha a segunda matriz:\n");
    for(i=0;i<lin;i++){
        printf("Linha %d:\n",i);
        for(j=0;j<col;j++){
            scanf("%d",&mat2[i][j]);
            
            soma[i][j]+=mat2[i][j];
            sub[i][j]-=mat2[i][j];
        }
    }
    
    printf("\n\nRESULTADO SOMA:");
    for(i=0;i<lin;i++){
        printf("\nLinha %d:",i);
        for(j=0;j<col;j++){
            printf(" %d ",soma[i][j]);
        }
    }
    printf("\n\nRESULTADO SUBTRAÇÃO:");
    for(i=0;i<lin;i++){
        printf("\nLinha %d:",i);
        for(j=0;j<col;j++){
            printf(" %d ",sub[i][j]);
        }
    }
    
    return (0);
}

