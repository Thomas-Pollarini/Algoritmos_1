#include <stdio.h>
#include <stdlib.h>

#define lin 20
#define col 10

int main() {

    int i,j,soma[col],mat[lin][col];
    
    printf("Preencha a matriz:\n");
    for(i=0;i<col;i++){
        printf("Coluna %d:\n",i);
        soma[i]=0;
        for(j=0;j<lin;j++){
            scanf("%d",&mat[j][i]);
            
            soma[i]+=mat[j][i];
        }
    }
    
    
    for(i=0;i<col;i++){
        for(j=0;j<lin;j++){
            mat[j][i]*=soma[i]; 
        }
    }
    printf("\n\nMATRIZ RESULTANTE:");
    for(i=0;i<lin;i++){
        printf("\nLinha %d: ",i);
        for(j=0;j<col;j++){
            printf(" %d ",mat[i][j]);
        }
    }
    
    
    return (0);
}

