#include <stdio.h>
#include <stdlib.h>

#define lin 6
#define col 4

int main() {

    int i,j,maior[lin],mat[lin][col];
    
    printf("Preencha a matriz:\n");
    for(i=0;i<lin;i++){
        printf("Linha %d:\n",i);
        for(j=0;j<col;j++){
            scanf("%d",&mat[i][j]);
            
            if(j==0){
                maior[i]=mat[i][j];
            }else{
                if(mat[i][j]>maior[i]){
                    maior[i]=mat[i][j];
                }
            }
        }
    }
    printf("\nMATRIZ RESULTANTE:");
    for(i=0;i<lin;i++){
        printf("\nLinha %d: ",i);
        for(j=0;j<col;j++){
            printf(" %d ",mat[i][j]*maior[i]);
        }
    }
    return (0);
}

