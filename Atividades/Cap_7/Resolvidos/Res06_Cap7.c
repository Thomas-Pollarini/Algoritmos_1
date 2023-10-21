#include <stdio.h>
#include <stdlib.h>

#define lin 4
#define igual 5
#define col 2


int main() {

    int i,j,k,mult,mat1[lin][igual],mat2[igual][col],res[lin][col];
    
    printf("Preencha a primeira matriz:\n");
    for(i=0;i<lin;i++){
        printf("Linha %d:\n",i);
        for(j=0;j<igual;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Preencha a segunda matriz:\n");
    for(i=0;i<igual;i++){
        printf("Linha %d:\n",i);
        for(j=0;j<col;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    
    
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            mult=0;
            for(k=0;k<igual;k++){
                mult+=mat1[i][k]*mat2[k][j];
            }
            res[i][j]=mult;
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

