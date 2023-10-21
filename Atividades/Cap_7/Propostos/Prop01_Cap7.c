#include <stdio.h>
#include <stdlib.h>

#define lin 3
#define col 5

int main() {

    int i,j,cont=0,mat[lin][col];
    
    printf("Preencha a mamtriz:\n");
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            scanf("%d",&mat[i][j]);
            
            if(mat[i][j]>15 && mat[i][j]<20){
                cont++;
            }
        }
    }
    printf("\nQuantidade de números entre 15 e 20: %d\n",cont);
    
    return (0);
}

