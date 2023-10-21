#include <stdio.h>
#include <stdlib.h>

#define lin 2
#define col 2

int main() {

    int i,j,maior,mat[lin][col],res[lin][col];
    
    printf("Preencha a matriz:\n");
    
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            scanf("%d",&mat[i][j]);
            
            if(i==0 && j==0){
                maior=mat[0][0];
            }else{
                if(mat[i][j]>maior){
                    maior=mat[i][j];
                }
            }
            
        }
    }
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            res[i][j]=mat[i][j]*maior;
        }
    }    
    printf("Matriz R: ");
    for(i=0;i<lin;i++){
        printf("\nLinha %d: ",i);
        for(j=0;j<col;j++){
            printf(" %d ",res[i][j]);
        }
    }
    
    return (0);
}

