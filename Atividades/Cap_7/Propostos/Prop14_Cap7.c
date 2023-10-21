#include <stdio.h>
#include <stdlib.h>

#define lin 2
#define col 3

int main() {

    int i,j,cont=0,mat[lin][col];
    
    printf("Preencha a matriz:\n");
    for(i=0;i<lin;i++){
        printf("Linha %d:\n",i);
        for(j=0;j<col;j++){
            scanf("%d",&mat[i][j]);
            
            if(mat[i][j]<5 || mat[i][j]>15){
                cont++;
            }
            
        }
    }
    printf("\nQntd de elementos da matriz que não estão no intervalo [5,15]: %d",cont);
    
    return (0);
}

