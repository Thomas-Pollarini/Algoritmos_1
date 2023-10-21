#include <stdio.h>
#include <stdlib.h>

#define lin 6
#define col 10

int main() {

    int i,j,cont=0,soma[col],mat[lin+1][col];

    
    printf("Preencha a matriz:\n");
    for(i=0;i<lin;i++){
        printf("Linha %d:\n",i);
        for(j=0;j<col;j++){
            scanf("%d",&mat[i][j]);
            if(i==0){
                soma[j]=0;
            }
            soma[j]+=mat[i][j];
            
        }
    }
    for(i=0;i<col;i++){
        mat[lin][i]=soma[i];
    }
    printf("Linha 7: ");
    for(i=0;i<col;i++){
        printf(" %d ",mat[lin][i]);
    }
    
    return (0);
}

