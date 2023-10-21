#include <stdio.h>
#include <stdlib.h>

#define lin 6
#define col 4

int main() {

    int i,j,cont=0,mat[lin][col],mat2[lin][col];
    
    printf("Preencha a matriz:\n");
    for(i=0;i<lin;i++){
        printf("Linha %d:\n",i);
        for(j=0;j<col;j++){
            scanf("%d",&mat[i][j]);
            
            if(mat[i][j]>30){
                cont++;
            }
            if(mat[i][j]==30){
                mat2[i][j]=0;
            }else{
                mat2[i][j]=mat[i][j];
            }
        }
    }    
    printf("\nQuantidade de elementos maiores que 30: %d\n",cont);
    printf("\nMatriz 2:");
    for(i=0;i<lin;i++){
        printf("\nLinha %d: ",i);
        for(j=0;j<col;j++){
            printf(" %d ",mat2[i][j]);
        }
    }  
    
    
    return (0);
}

